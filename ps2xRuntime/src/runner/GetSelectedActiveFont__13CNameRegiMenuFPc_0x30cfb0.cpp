#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSelectedActiveFont__13CNameRegiMenuFPc
// Address: 0x30cfb0 - 0x30d264
void GetSelectedActiveFont__13CNameRegiMenuFPc_0x30cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSelectedActiveFont__13CNameRegiMenuFPc_0x30cfb0");
#endif

    switch (ctx->pc) {
        case 0x30cfdcu: goto label_30cfdc;
        case 0x30d1bcu: goto label_30d1bc;
        default: break;
    }

    ctx->pc = 0x30cfb0u;

    // 0x30cfb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30cfb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30cfb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30cfbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30cfc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30cfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30cfc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30cfc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cfc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30cfcc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30cfccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cfd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30cfd4: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30CFD4u;
    SET_GPR_U32(ctx, 31, 0x30CFDCu);
    ctx->pc = 0x30CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CFD4u;
            // 0x30cfd8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CFDCu; }
        if (ctx->pc != 0x30CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CFDCu; }
        if (ctx->pc != 0x30CFDCu) { return; }
    }
    ctx->pc = 0x30CFDCu;
label_30cfdc:
    // 0x30cfdc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x30cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30cfe0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x30cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x30cfe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30cfe8: 0x2484de80  addiu       $a0, $a0, -0x2180
    ctx->pc = 0x30cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958720));
    // 0x30cfec: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x30cfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30cff0: 0x86920114  lh          $s2, 0x114($s4)
    ctx->pc = 0x30cff0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x30cff4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30cff8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x30cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x30cffc: 0x2463de84  addiu       $v1, $v1, -0x217C
    ctx->pc = 0x30cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958724));
    // 0x30d000: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30d000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d004: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x30d004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30d008: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d00c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x30d00cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30d010: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x30d010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x30d014: 0x2484de88  addiu       $a0, $a0, -0x2178
    ctx->pc = 0x30d014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958728));
    // 0x30d018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30d018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d01c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x30d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x30d020: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x30d020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d024: 0x12a50004  beq         $s5, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D024u;
    {
        const bool branch_taken_0x30d024 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x30D028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D024u;
            // 0x30d028: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d024) {
            ctx->pc = 0x30D038u;
            goto label_30d038;
        }
    }
    ctx->pc = 0x30D02Cu;
    // 0x30d02c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d030: 0x16a5002e  bne         $s5, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x30D030u;
    {
        const bool branch_taken_0x30d030 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        if (branch_taken_0x30d030) {
            ctx->pc = 0x30D0ECu;
            goto label_30d0ec;
        }
    }
    ctx->pc = 0x30D038u;
label_30d038:
    // 0x30d038: 0x125c3c  dsll32      $t3, $s2, 16
    ctx->pc = 0x30d038u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30d03c: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x30d03cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
    // 0x30d040: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x30d040u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x30d044: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30d048: 0x165001a  div         $zero, $t3, $a1
    ctx->pc = 0x30d048u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30d04c: 0x24e7ddd8  addiu       $a3, $a3, -0x2228
    ctx->pc = 0x30d04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958552));
    // 0x30d050: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x30d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d054: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x30d054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30d058: 0xb57c2  srl         $t2, $t3, 31
    ctx->pc = 0x30d058u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x30d05c: 0x3c058888  lui         $a1, 0x8888
    ctx->pc = 0x30d05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34952 << 16));
    // 0x30d060: 0x34a88889  ori         $t0, $a1, 0x8889
    ctx->pc = 0x30d060u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x30d064: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x30d064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
    // 0x30d068: 0x34a96667  ori         $t1, $a1, 0x6667
    ctx->pc = 0x30d068u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
    // 0x30d06c: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x30d06cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30d070: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x30d070u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x30d074: 0x2810  mfhi        $a1
    ctx->pc = 0x30d074u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x30d078: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x30d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x30d07c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x30d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x30d080: 0x10b0018  mult        $zero, $t0, $t3
    ctx->pc = 0x30d080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30d084: 0xafb00074  sw          $s0, 0x74($sp)
    ctx->pc = 0x30d084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 16));
    // 0x30d088: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x30d088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x30d08c: 0x3010  mfhi        $a2
    ctx->pc = 0x30d08cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x30d090: 0x547c2  srl         $t0, $a1, 31
    ctx->pc = 0x30d090u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x30d094: 0x1250018  mult        $zero, $t1, $a1
    ctx->pc = 0x30d094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30d098: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x30d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x30d09c: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x30d09cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    // 0x30d0a0: 0x3810  mfhi        $a3
    ctx->pc = 0x30d0a0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x30d0a4: 0xca4821  addu        $t1, $a2, $t2
    ctx->pc = 0x30d0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x30d0a8: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x30d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x30d0ac: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x30d0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x30d0b0: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x30d0b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x30d0b4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x30d0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x30d0b8: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x30d0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x30d0bc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x30d0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x30d0c0: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x30d0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x30d0c4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x30d0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x30d0c8: 0x8d110070  lw          $s1, 0x70($t0)
    ctx->pc = 0x30d0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x30d0cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30d0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30d0d0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30d0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30d0d4: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x30d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x30d0d8: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x30d0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x30d0dc: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x30d0dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30d0e0: 0xa2650000  sb          $a1, 0x0($s3)
    ctx->pc = 0x30d0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x30d0e4: 0x80c50001  lb          $a1, 0x1($a2)
    ctx->pc = 0x30d0e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x30d0e8: 0xa2650001  sb          $a1, 0x1($s3)
    ctx->pc = 0x30d0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 5));
label_30d0ec:
    // 0x30d0ec: 0x16a00027  bnez        $s5, . + 4 + (0x27 << 2)
    ctx->pc = 0x30D0ECu;
    {
        const bool branch_taken_0x30d0ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D0ECu;
            // 0x30d0f0: 0x12443c  dsll32      $t0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0ec) {
            ctx->pc = 0x30D18Cu;
            goto label_30d18c;
        }
    }
    ctx->pc = 0x30D0F4u;
    // 0x30d0f4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x30d0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d0f8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x30d0f8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x30d0fc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x30d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30d100: 0x105001a  div         $zero, $t0, $a1
    ctx->pc = 0x30d100u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30d104: 0x3c034ec4  lui         $v1, 0x4EC4
    ctx->pc = 0x30d104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20164 << 16));
    // 0x30d108: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x30d108u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x30d10c: 0x3810  mfhi        $a3
    ctx->pc = 0x30d10cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x30d110: 0x3465ec4f  ori         $a1, $v1, 0xEC4F
    ctx->pc = 0x30d110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60495);
    // 0x30d114: 0x2903001a  slti        $v1, $t0, 0x1A
    ctx->pc = 0x30d114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x30d118: 0xa80018  mult        $zero, $a1, $t0
    ctx->pc = 0x30d118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30d11c: 0x0  nop
    ctx->pc = 0x30d11cu;
    // NOP
    // 0x30d120: 0x0  nop
    ctx->pc = 0x30d120u;
    // NOP
    // 0x30d124: 0x2810  mfhi        $a1
    ctx->pc = 0x30d124u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x30d128: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x30d128u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x30d12c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D12Cu;
    {
        const bool branch_taken_0x30d12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D12Cu;
            // 0x30d130: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d12c) {
            ctx->pc = 0x30D148u;
            goto label_30d148;
        }
    }
    ctx->pc = 0x30D134u;
    // 0x30d134: 0x29010034  slti        $at, $t0, 0x34
    ctx->pc = 0x30d134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x30d138: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D138u;
    {
        const bool branch_taken_0x30d138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D138u;
            // 0x30d13c: 0x29030034  slti        $v1, $t0, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d138) {
            ctx->pc = 0x30D14Cu;
            goto label_30d14c;
        }
    }
    ctx->pc = 0x30D140u;
    // 0x30d140: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x30d140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d144: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x30d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_30d148:
    // 0x30d148: 0x29030034  slti        $v1, $t0, 0x34
    ctx->pc = 0x30d148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
label_30d14c:
    // 0x30d14c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D14Cu;
    {
        const bool branch_taken_0x30d14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D14Cu;
            // 0x30d150: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d14c) {
            ctx->pc = 0x30D160u;
            goto label_30d160;
        }
    }
    ctx->pc = 0x30D154u;
    // 0x30d154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d158: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x30d158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x30d15c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x30d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30d160:
    // 0x30d160: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30d164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d168: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30d16c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x30d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x30d170: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30d170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30d174: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30d178: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x30d178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x30d17c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x30d17cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d180: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x30d180u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30d184: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x30d184u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x30d188: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x30d188u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
label_30d18c:
    // 0x30d18c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d190: 0x16a3000b  bne         $s5, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30D190u;
    {
        const bool branch_taken_0x30d190 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D190u;
            // 0x30d194: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d190) {
            ctx->pc = 0x30D1C0u;
            goto label_30d1c0;
        }
    }
    ctx->pc = 0x30D198u;
    // 0x30d198: 0x8e840118  lw          $a0, 0x118($s4)
    ctx->pc = 0x30d198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x30d19c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30d19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1a0: 0x8e820114  lw          $v0, 0x114($s4)
    ctx->pc = 0x30d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x30d1a4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30d1a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d1ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30d1b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d1b4: 0xc0c2b1c  jal         func_30AC70
    ctx->pc = 0x30D1B4u;
    SET_GPR_U32(ctx, 31, 0x30D1BCu);
    ctx->pc = 0x30D1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1B4u;
            // 0x30d1b8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AC70u;
    if (runtime->hasFunction(0x30AC70u)) {
        auto targetFn = runtime->lookupFunction(0x30AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D1BCu; }
        if (ctx->pc != 0x30D1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNameRegistFontKanjiList__FiPc_0x30ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D1BCu; }
        if (ctx->pc != 0x30D1BCu) { return; }
    }
    ctx->pc = 0x30D1BCu;
label_30d1bc:
    // 0x30d1bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30d1c0:
    // 0x30d1c0: 0x16a3001f  bne         $s5, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x30D1C0u;
    {
        const bool branch_taken_0x30d1c0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1C0u;
            // 0x30d1c4: 0x12343c  dsll32      $a2, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d1c0) {
            ctx->pc = 0x30D240u;
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D1C8u;
    // 0x30d1c8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x30d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30d1cc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x30d1ccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x30d1d0: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x30d1d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30d1d4: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x30d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x30d1d8: 0x0  nop
    ctx->pc = 0x30d1d8u;
    // NOP
    // 0x30d1dc: 0x2810  mfhi        $a1
    ctx->pc = 0x30d1dcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x30d1e0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x30d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x30d1e4: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x30d1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x30d1e8: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x30d1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30d1ec: 0x0  nop
    ctx->pc = 0x30d1ecu;
    // NOP
    // 0x30d1f0: 0x0  nop
    ctx->pc = 0x30d1f0u;
    // NOP
    // 0x30d1f4: 0x1810  mfhi        $v1
    ctx->pc = 0x30d1f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x30d1f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30d1fc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x30d1fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x30d200: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d204: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x30d204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30d208: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D208u;
    {
        const bool branch_taken_0x30d208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D208u;
            // 0x30d20c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d208) {
            ctx->pc = 0x30D21Cu;
            goto label_30d21c;
        }
    }
    ctx->pc = 0x30D210u;
    // 0x30d210: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x30d210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d214: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x30d214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x30d218: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x30d218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_30d21c:
    // 0x30d21c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x30d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d220: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30d224: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30d224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30d228: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30d22c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x30d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x30d230: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x30d230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d234: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x30d234u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30d238: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x30d238u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x30d23c: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x30d23cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
label_30d240:
    // 0x30d240: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30d240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d244: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30d244u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d248: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30d248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d24c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30d24cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30d250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d25c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D25Cu;
            // 0x30d260: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D264u;
}
