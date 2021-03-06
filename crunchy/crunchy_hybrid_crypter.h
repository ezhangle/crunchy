// Copyright 2017 The CrunchyCrypt Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CRUNCHY_CRUNCHY_HYBRID_CRYPTER_H_
#define CRUNCHY_CRUNCHY_HYBRID_CRYPTER_H_

#include <string>

#include "absl/strings/string_view.h"
#include "crunchy/util/status.h"

namespace crunchy {

// An API that supports hybrid encryption (asymmetric encryption).
class CrunchyHybridEncrypter {
 public:
  virtual ~CrunchyHybridEncrypter() = default;

  virtual StatusOr<std::string> Encrypt(absl::string_view plaintext) const = 0;
};

class CrunchyHybridDecrypter {
 public:
  virtual ~CrunchyHybridDecrypter() = default;

  virtual StatusOr<std::string> Decrypt(absl::string_view ciphertext) const = 0;
};

}  // namespace crunchy

#endif  // CRUNCHY_CRUNCHY_HYBRID_CRYPTER_H_
