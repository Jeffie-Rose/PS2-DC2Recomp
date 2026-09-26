#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGameObjectEvent__6CSceneFPfP15CSceneEventData
// Address: 0x2cb900 - 0x2cba9c
void GetGameObjectEvent__6CSceneFPfP15CSceneEventData_0x2cb900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGameObjectEvent__6CSceneFPfP15CSceneEventData_0x2cb900");
#endif

    switch (ctx->pc) {
        case 0x2cb948u: goto label_2cb948;
        case 0x2cb954u: goto label_2cb954;
        case 0x2cb970u: goto label_2cb970;
        case 0x2cb990u: goto label_2cb990;
        case 0x2cb9bcu: goto label_2cb9bc;
        case 0x2cb9f4u: goto label_2cb9f4;
        case 0x2cba08u: goto label_2cba08;
        case 0x2cba28u: goto label_2cba28;
        case 0x2cba3cu: goto label_2cba3c;
        default: break;
    }

    ctx->pc = 0x2cb900u;

    // 0x2cb900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cb900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cb904: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2cb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2cb908: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cb908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2cb90c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cb90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cb910: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cb910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cb914: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2cb914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cb918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cb91c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2cb91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cb920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cb924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb92c: 0x8c822e5c  lw          $v0, 0x2E5C($a0)
    ctx->pc = 0x2cb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2cb930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB930u;
    {
        const bool branch_taken_0x2cb930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB930u;
            // 0x2cb934: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb930) {
            ctx->pc = 0x2CB940u;
            goto label_2cb940;
        }
    }
    ctx->pc = 0x2CB938u;
    // 0x2cb938: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2CB938u;
    {
        const bool branch_taken_0x2cb938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB938u;
            // 0x2cb93c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb938) {
            ctx->pc = 0x2CBA74u;
            goto label_2cba74;
        }
    }
    ctx->pc = 0x2CB940u;
label_2cb940:
    // 0x2cb940: 0xc0a0f80  jal         func_283E00
    ctx->pc = 0x2CB940u;
    SET_GPR_U32(ctx, 31, 0x2CB948u);
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB948u; }
        if (ctx->pc != 0x2CB948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB948u; }
        if (ctx->pc != 0x2CB948u) { return; }
    }
    ctx->pc = 0x2CB948u;
label_2cb948:
    // 0x2cb948: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x2cb948u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x2cb94c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2cb94cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb950: 0x26105390  addiu       $s0, $s0, 0x5390
    ctx->pc = 0x2cb950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
label_2cb954:
    // 0x2cb954: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cb954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb958: 0x4400045  bltz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2CB958u;
    {
        const bool branch_taken_0x2cb958 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2cb958) {
            ctx->pc = 0x2CBA70u;
            goto label_2cba70;
        }
    }
    ctx->pc = 0x2CB960u;
    // 0x2cb960: 0x14560041  bne         $v0, $s6, . + 4 + (0x41 << 2)
    ctx->pc = 0x2CB960u;
    {
        const bool branch_taken_0x2cb960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2CB964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB960u;
            // 0x2cb964: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb960) {
            ctx->pc = 0x2CBA68u;
            goto label_2cba68;
        }
    }
    ctx->pc = 0x2CB968u;
    // 0x2cb968: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2CB968u;
    {
        const bool branch_taken_0x2cb968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB968u;
            // 0x2cb96c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb968) {
            ctx->pc = 0x2CBA54u;
            goto label_2cba54;
        }
    }
    ctx->pc = 0x2CB970u;
label_2cb970:
    // 0x2cb970: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2cb970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2cb974: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x2cb974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cb978: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2cb978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2cb97c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cb97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cb980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cb984: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2cb984u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2cb988: 0xc04c018  jal         func_130060
    ctx->pc = 0x2CB988u;
    SET_GPR_U32(ctx, 31, 0x2CB990u);
    ctx->pc = 0x2CB98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB988u;
            // 0x2cb98c: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB990u; }
        if (ctx->pc != 0x2CB990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB990u; }
        if (ctx->pc != 0x2CB990u) { return; }
    }
    ctx->pc = 0x2CB990u;
label_2cb990:
    // 0x2cb990: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2cb990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2cb994: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb998: 0x0  nop
    ctx->pc = 0x2cb998u;
    // NOP
    // 0x2cb99c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb9a0: 0x0  nop
    ctx->pc = 0x2cb9a0u;
    // NOP
    // 0x2cb9a4: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x2CB9A4u;
    {
        const bool branch_taken_0x2cb9a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9A4u;
            // 0x2cb9a8: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9a4) {
            ctx->pc = 0x2CBA4Cu;
            goto label_2cba4c;
        }
    }
    ctx->pc = 0x2CB9ACu;
    // 0x2cb9ac: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x2cb9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x2cb9b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2cb9b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb9b4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2CB9B4u;
    SET_GPR_U32(ctx, 31, 0x2CB9BCu);
    ctx->pc = 0x2CB9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9B4u;
            // 0x2cb9b8: 0x7e620030  sq          $v0, 0x30($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB9BCu; }
        if (ctx->pc != 0x2CB9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB9BCu; }
        if (ctx->pc != 0x2CB9BCu) { return; }
    }
    ctx->pc = 0x2CB9BCu;
label_2cb9bc:
    // 0x2cb9bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cb9c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb9c4: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB9C4u;
    {
        const bool branch_taken_0x2cb9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9C4u;
            // 0x2cb9c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9c4) {
            ctx->pc = 0x2CBA1Cu;
            goto label_2cba1c;
        }
    }
    ctx->pc = 0x2CB9CCu;
    // 0x2cb9cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb9d0: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CB9D0u;
    {
        const bool branch_taken_0x2cb9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CB9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9D0u;
            // 0x2cb9d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9d0) {
            ctx->pc = 0x2CBA1Cu;
            goto label_2cba1c;
        }
    }
    ctx->pc = 0x2CB9D8u;
    // 0x2cb9d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB9D8u;
    {
        const bool branch_taken_0x2cb9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cb9d8) {
            ctx->pc = 0x2CB9E8u;
            goto label_2cb9e8;
        }
    }
    ctx->pc = 0x2CB9E0u;
    // 0x2cb9e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2CB9E0u;
    {
        const bool branch_taken_0x2cb9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9E0u;
            // 0x2cb9e4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9e0) {
            ctx->pc = 0x2CBA50u;
            goto label_2cba50;
        }
    }
    ctx->pc = 0x2CB9E8u;
label_2cb9e8:
    // 0x2cb9e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9ec: 0xc0a11a4  jal         func_284690
    ctx->pc = 0x2CB9ECu;
    SET_GPR_U32(ctx, 31, 0x2CB9F4u);
    ctx->pc = 0x2CB9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9ECu;
            // 0x2cb9f0: 0x2406007a  addiu       $a2, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB9F4u; }
        if (ctx->pc != 0x2CB9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB9F4u; }
        if (ctx->pc != 0x2CB9F4u) { return; }
    }
    ctx->pc = 0x2CB9F4u;
label_2cb9f4:
    // 0x2cb9f4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB9F4u;
    {
        const bool branch_taken_0x2cb9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9F4u;
            // 0x2cb9f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9f4) {
            ctx->pc = 0x2CBA4Cu;
            goto label_2cba4c;
        }
    }
    ctx->pc = 0x2CB9FCu;
    // 0x2cb9fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba00: 0xc0a11a4  jal         func_284690
    ctx->pc = 0x2CBA00u;
    SET_GPR_U32(ctx, 31, 0x2CBA08u);
    ctx->pc = 0x2CBA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA00u;
            // 0x2cba04: 0x2406007b  addiu       $a2, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA08u; }
        if (ctx->pc != 0x2CBA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA08u; }
        if (ctx->pc != 0x2CBA08u) { return; }
    }
    ctx->pc = 0x2CBA08u;
label_2cba08:
    // 0x2cba08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBA08u;
    {
        const bool branch_taken_0x2cba08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba08) {
            ctx->pc = 0x2CBA4Cu;
            goto label_2cba4c;
        }
    }
    ctx->pc = 0x2CBA10u;
    // 0x2cba10: 0xae7100c8  sw          $s1, 0xC8($s3)
    ctx->pc = 0x2cba10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 17));
    // 0x2cba14: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2CBA14u;
    {
        const bool branch_taken_0x2cba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA14u;
            // 0x2cba18: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba14) {
            ctx->pc = 0x2CBA74u;
            goto label_2cba74;
        }
    }
    ctx->pc = 0x2CBA1Cu;
label_2cba1c:
    // 0x2cba1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba20: 0xc0a11a4  jal         func_284690
    ctx->pc = 0x2CBA20u;
    SET_GPR_U32(ctx, 31, 0x2CBA28u);
    ctx->pc = 0x2CBA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA20u;
            // 0x2cba24: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA28u; }
        if (ctx->pc != 0x2CBA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA28u; }
        if (ctx->pc != 0x2CBA28u) { return; }
    }
    ctx->pc = 0x2CBA28u;
label_2cba28:
    // 0x2cba28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBA28u;
    {
        const bool branch_taken_0x2cba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA28u;
            // 0x2cba2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba28) {
            ctx->pc = 0x2CBA4Cu;
            goto label_2cba4c;
        }
    }
    ctx->pc = 0x2CBA30u;
    // 0x2cba30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cba30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba34: 0xc0a11a4  jal         func_284690
    ctx->pc = 0x2CBA34u;
    SET_GPR_U32(ctx, 31, 0x2CBA3Cu);
    ctx->pc = 0x2CBA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA34u;
            // 0x2cba38: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA3Cu; }
        if (ctx->pc != 0x2CBA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA3Cu; }
        if (ctx->pc != 0x2CBA3Cu) { return; }
    }
    ctx->pc = 0x2CBA3Cu;
label_2cba3c:
    // 0x2cba3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBA3Cu;
    {
        const bool branch_taken_0x2cba3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA3Cu;
            // 0x2cba40: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba3c) {
            ctx->pc = 0x2CBA4Cu;
            goto label_2cba4c;
        }
    }
    ctx->pc = 0x2CBA44u;
    // 0x2cba44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CBA44u;
    {
        const bool branch_taken_0x2cba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA44u;
            // 0x2cba48: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba44) {
            ctx->pc = 0x2CBA78u;
            goto label_2cba78;
        }
    }
    ctx->pc = 0x2CBA4Cu;
label_2cba4c:
    // 0x2cba4c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2cba4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2cba50:
    // 0x2cba50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cba50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cba54:
    // 0x2cba54: 0x0  nop
    ctx->pc = 0x2cba54u;
    // NOP
    // 0x2cba58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cba5c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2cba5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cba60: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2CBA60u;
    {
        const bool branch_taken_0x2cba60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cba60) {
            ctx->pc = 0x2CB970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb970;
        }
    }
    ctx->pc = 0x2CBA68u;
label_2cba68:
    // 0x2cba68: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x2CBA68u;
    {
        const bool branch_taken_0x2cba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA68u;
            // 0x2cba6c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba68) {
            ctx->pc = 0x2CB954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb954;
        }
    }
    ctx->pc = 0x2CBA70u;
label_2cba70:
    // 0x2cba70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cba74:
    // 0x2cba74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2cba74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2cba78:
    // 0x2cba78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cba78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cba7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cba7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cba80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cba80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cba84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cba84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cba88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cba88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cba8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cba8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cba90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cba90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cba94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA94u;
            // 0x2cba98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBA9Cu;
}
