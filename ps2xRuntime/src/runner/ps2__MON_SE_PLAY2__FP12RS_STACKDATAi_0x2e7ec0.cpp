#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MON_SE_PLAY2__FP12RS_STACKDATAi
// Address: 0x2e7ec0 - 0x2e7fdc
void ps2__MON_SE_PLAY2__FP12RS_STACKDATAi_0x2e7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MON_SE_PLAY2__FP12RS_STACKDATAi_0x2e7ec0");
#endif

    switch (ctx->pc) {
        case 0x2e7f08u: goto label_2e7f08;
        case 0x2e7f14u: goto label_2e7f14;
        case 0x2e7f34u: goto label_2e7f34;
        case 0x2e7f64u: goto label_2e7f64;
        case 0x2e7f74u: goto label_2e7f74;
        case 0x2e7f94u: goto label_2e7f94;
        case 0x2e7facu: goto label_2e7fac;
        default: break;
    }

    ctx->pc = 0x2e7ec0u;

    // 0x2e7ec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e7ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e7ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7ec8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e7ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e7ecc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e7ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e7ed4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e7ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7edc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e7edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ee0: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7EE0u;
    {
        const bool branch_taken_0x2e7ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7EE0u;
            // 0x2e7ee4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ee0) {
            ctx->pc = 0x2E7EFCu;
            goto label_2e7efc;
        }
    }
    ctx->pc = 0x2E7EE8u;
    // 0x2e7ee8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e7eec: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7EECu;
    {
        const bool branch_taken_0x2e7eec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7EECu;
            // 0x2e7ef0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7eec) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7EF4u;
    // 0x2e7ef4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2E7EF4u;
    {
        const bool branch_taken_0x2e7ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7EF4u;
            // 0x2e7ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ef4) {
            ctx->pc = 0x2E7FC0u;
            goto label_2e7fc0;
        }
    }
    ctx->pc = 0x2E7EFCu;
label_2e7efc:
    // 0x2e7efc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e7efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f00:
    // 0x2e7f00: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7F00u;
    SET_GPR_U32(ctx, 31, 0x2E7F08u);
    ctx->pc = 0x2E7F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F00u;
            // 0x2e7f04: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F08u; }
        if (ctx->pc != 0x2E7F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F08u; }
        if (ctx->pc != 0x2E7F08u) { return; }
    }
    ctx->pc = 0x2E7F08u;
label_2e7f08:
    // 0x2e7f08: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e7f0c: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E7F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F14u);
    ctx->pc = 0x2E7F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F0Cu;
            // 0x2e7f10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F14u; }
        if (ctx->pc != 0x2E7F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F14u; }
        if (ctx->pc != 0x2E7F14u) { return; }
    }
    ctx->pc = 0x2E7F14u;
label_2e7f14:
    // 0x2e7f14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7F14u;
    {
        const bool branch_taken_0x2e7f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7f14) {
            ctx->pc = 0x2E7F24u;
            goto label_2e7f24;
        }
    }
    ctx->pc = 0x2E7F1Cu;
    // 0x2e7f1c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E7F1Cu;
    {
        const bool branch_taken_0x2e7f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F1Cu;
            // 0x2e7f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f1c) {
            ctx->pc = 0x2E7FC0u;
            goto label_2e7fc0;
        }
    }
    ctx->pc = 0x2E7F24u;
label_2e7f24:
    // 0x2e7f24: 0x8c510588  lw          $s1, 0x588($v0)
    ctx->pc = 0x2e7f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2e7f28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e7f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f2c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7F2Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F34u);
    ctx->pc = 0x2E7F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F2Cu;
            // 0x2e7f30: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F34u; }
        if (ctx->pc != 0x2E7F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F34u; }
        if (ctx->pc != 0x2E7F34u) { return; }
    }
    ctx->pc = 0x2E7F34u;
label_2e7f34:
    // 0x2e7f34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f38: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e7f3c: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7F3Cu;
    {
        const bool branch_taken_0x2e7f3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F3Cu;
            // 0x2e7f40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f3c) {
            ctx->pc = 0x2E7F6Cu;
            goto label_2e7f6c;
        }
    }
    ctx->pc = 0x2E7F44u;
    // 0x2e7f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7f48: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7F48u;
    {
        const bool branch_taken_0x2e7f48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F48u;
            // 0x2e7f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f48) {
            ctx->pc = 0x2E7F58u;
            goto label_2e7f58;
        }
    }
    ctx->pc = 0x2E7F50u;
    // 0x2e7f50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E7F50u;
    {
        const bool branch_taken_0x2e7f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F50u;
            // 0x2e7f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f50) {
            ctx->pc = 0x2E7FB4u;
            goto label_2e7fb4;
        }
    }
    ctx->pc = 0x2E7F58u;
label_2e7f58:
    // 0x2e7f58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f5c: 0xc063818  jal         func_18E060
    ctx->pc = 0x2E7F5Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F64u);
    ctx->pc = 0x2E7F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F5Cu;
            // 0x2e7f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F64u; }
        if (ctx->pc != 0x2E7F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F64u; }
        if (ctx->pc != 0x2E7F64u) { return; }
    }
    ctx->pc = 0x2E7F64u;
label_2e7f64:
    // 0x2e7f64: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E7F64u;
    {
        const bool branch_taken_0x2e7f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F64u;
            // 0x2e7f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f64) {
            ctx->pc = 0x2E7FC0u;
            goto label_2e7fc0;
        }
    }
    ctx->pc = 0x2E7F6Cu;
label_2e7f6c:
    // 0x2e7f6c: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E7F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F74u);
    ctx->pc = 0x2E7F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F6Cu;
            // 0x2e7f70: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F74u; }
        if (ctx->pc != 0x2E7F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F74u; }
        if (ctx->pc != 0x2E7F74u) { return; }
    }
    ctx->pc = 0x2E7F74u;
label_2e7f74:
    // 0x2e7f74: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2e7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2e7f78: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x2e7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x2e7f7c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e7f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7f80: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2e7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e7f84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e7f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e7f88: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2e7f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2e7f8c: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x2E7F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F94u);
    ctx->pc = 0x2E7F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F8Cu;
            // 0x2e7f90: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F94u; }
        if (ctx->pc != 0x2E7F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F94u; }
        if (ctx->pc != 0x2E7F94u) { return; }
    }
    ctx->pc = 0x2E7F94u;
label_2e7f94:
    // 0x2e7f94: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x2e7f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f9c: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x2e7f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e7fa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7fa4: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x2E7FA4u;
    SET_GPR_U32(ctx, 31, 0x2E7FACu);
    ctx->pc = 0x2E7FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7FA4u;
            // 0x2e7fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7FACu; }
        if (ctx->pc != 0x2E7FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7FACu; }
        if (ctx->pc != 0x2E7FACu) { return; }
    }
    ctx->pc = 0x2E7FACu;
label_2e7fac:
    // 0x2e7fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7FACu;
    {
        const bool branch_taken_0x2e7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fac) {
            ctx->pc = 0x2E7FBCu;
            goto label_2e7fbc;
        }
    }
    ctx->pc = 0x2E7FB4u;
label_2e7fb4:
    // 0x2e7fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7FB4u;
    {
        const bool branch_taken_0x2e7fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7FB4u;
            // 0x2e7fb8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fb4) {
            ctx->pc = 0x2E7FC4u;
            goto label_2e7fc4;
        }
    }
    ctx->pc = 0x2E7FBCu;
label_2e7fbc:
    // 0x2e7fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7fc0:
    // 0x2e7fc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e7fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7fc4:
    // 0x2e7fc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7FD4u;
            // 0x2e7fd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7FDCu;
}
