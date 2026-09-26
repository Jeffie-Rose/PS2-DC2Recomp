#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DebugGetItem__FP16CUserDataManageri
// Address: 0x1a1b80 - 0x1a207c
void DebugGetItem__FP16CUserDataManageri_0x1a1b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DebugGetItem__FP16CUserDataManageri_0x1a1b80");
#endif

    switch (ctx->pc) {
        case 0x1a1bb4u: goto label_1a1bb4;
        case 0x1a1bc8u: goto label_1a1bc8;
        case 0x1a1bd4u: goto label_1a1bd4;
        case 0x1a1bf0u: goto label_1a1bf0;
        case 0x1a1bfcu: goto label_1a1bfc;
        case 0x1a1c00u: goto label_1a1c00;
        case 0x1a1c20u: goto label_1a1c20;
        case 0x1a1c40u: goto label_1a1c40;
        case 0x1a1c60u: goto label_1a1c60;
        case 0x1a1c6cu: goto label_1a1c6c;
        case 0x1a1c80u: goto label_1a1c80;
        case 0x1a1c88u: goto label_1a1c88;
        case 0x1a1ca4u: goto label_1a1ca4;
        case 0x1a1cd0u: goto label_1a1cd0;
        case 0x1a1cdcu: goto label_1a1cdc;
        case 0x1a1ce8u: goto label_1a1ce8;
        case 0x1a1cf4u: goto label_1a1cf4;
        case 0x1a1d10u: goto label_1a1d10;
        case 0x1a1dc0u: goto label_1a1dc0;
        case 0x1a1dc8u: goto label_1a1dc8;
        case 0x1a1decu: goto label_1a1dec;
        case 0x1a1e0cu: goto label_1a1e0c;
        case 0x1a1e18u: goto label_1a1e18;
        case 0x1a1e44u: goto label_1a1e44;
        case 0x1a1e50u: goto label_1a1e50;
        case 0x1a1e60u: goto label_1a1e60;
        case 0x1a1e6cu: goto label_1a1e6c;
        case 0x1a1e78u: goto label_1a1e78;
        case 0x1a1e94u: goto label_1a1e94;
        case 0x1a1ea4u: goto label_1a1ea4;
        case 0x1a1eb4u: goto label_1a1eb4;
        case 0x1a1ec4u: goto label_1a1ec4;
        case 0x1a1ed0u: goto label_1a1ed0;
        case 0x1a1edcu: goto label_1a1edc;
        case 0x1a1ef4u: goto label_1a1ef4;
        case 0x1a1f10u: goto label_1a1f10;
        case 0x1a1f20u: goto label_1a1f20;
        case 0x1a1f30u: goto label_1a1f30;
        case 0x1a1f44u: goto label_1a1f44;
        case 0x1a1f5cu: goto label_1a1f5c;
        case 0x1a1f70u: goto label_1a1f70;
        case 0x1a1f90u: goto label_1a1f90;
        case 0x1a1fa0u: goto label_1a1fa0;
        case 0x1a1fbcu: goto label_1a1fbc;
        case 0x1a1fccu: goto label_1a1fcc;
        case 0x1a1fe8u: goto label_1a1fe8;
        case 0x1a1ff8u: goto label_1a1ff8;
        case 0x1a2014u: goto label_1a2014;
        case 0x1a2024u: goto label_1a2024;
        case 0x1a2034u: goto label_1a2034;
        case 0x1a2040u: goto label_1a2040;
        default: break;
    }

    ctx->pc = 0x1a1b80u;

    // 0x1a1b80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a1b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a1b84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a1b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a1b88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a1b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a1b8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a1b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a1b90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a1b90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a1b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a1b98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a1b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a1b9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a1b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a1ba0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a1ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a1ba4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1BA4u;
    {
        const bool branch_taken_0x1a1ba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BA4u;
            // 0x1a1ba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ba4) {
            ctx->pc = 0x1A1BB8u;
            goto label_1a1bb8;
        }
    }
    ctx->pc = 0x1A1BACu;
    // 0x1a1bac: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A1BACu;
    SET_GPR_U32(ctx, 31, 0x1A1BB4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BB4u; }
        if (ctx->pc != 0x1A1BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BB4u; }
        if (ctx->pc != 0x1A1BB4u) { return; }
    }
    ctx->pc = 0x1A1BB4u;
label_1a1bb4:
    // 0x1a1bb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1bb8:
    // 0x1a1bb8: 0x12000127  beqz        $s0, . + 4 + (0x127 << 2)
    ctx->pc = 0x1A1BB8u;
    {
        const bool branch_taken_0x1a1bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BB8u;
            // 0x1a1bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bb8) {
            ctx->pc = 0x1A2058u;
            goto label_1a2058;
        }
    }
    ctx->pc = 0x1A1BC0u;
    // 0x1a1bc0: 0xc066c58  jal         func_19B160
    ctx->pc = 0x1A1BC0u;
    SET_GPR_U32(ctx, 31, 0x1A1BC8u);
    ctx->pc = 0x19B160u;
    if (runtime->hasFunction(0x19B160u)) {
        auto targetFn = runtime->lookupFunction(0x19B160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BC8u; }
        if (ctx->pc != 0x1A1BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CUserDataManagerFv_0x19b160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BC8u; }
        if (ctx->pc != 0x1A1BC8u) { return; }
    }
    ctx->pc = 0x1A1BC8u;
label_1a1bc8:
    // 0x1a1bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bcc: 0xc0670f4  jal         func_19C3D0
    ctx->pc = 0x1A1BCCu;
    SET_GPR_U32(ctx, 31, 0x1A1BD4u);
    ctx->pc = 0x1A1BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BCCu;
            // 0x1a1bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BD4u; }
        if (ctx->pc != 0x1A1BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BD4u; }
        if (ctx->pc != 0x1A1BD4u) { return; }
    }
    ctx->pc = 0x1A1BD4u;
label_1a1bd4:
    // 0x1a1bd4: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1a1bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1a1bd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bdc: 0x16800018  bnez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A1BDCu;
    {
        const bool branch_taken_0x1a1bdc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BDCu;
            // 0x1a1be0: 0x263163d0  addiu       $s1, $s1, 0x63D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bdc) {
            ctx->pc = 0x1A1C40u;
            goto label_1a1c40;
        }
    }
    ctx->pc = 0x1A1BE4u;
    // 0x1a1be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1be8: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x1A1BE8u;
    SET_GPR_U32(ctx, 31, 0x1A1BF0u);
    ctx->pc = 0x1A1BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BE8u;
            // 0x1a1bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BF0u; }
        if (ctx->pc != 0x1A1BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BF0u; }
        if (ctx->pc != 0x1A1BF0u) { return; }
    }
    ctx->pc = 0x1A1BF0u;
label_1a1bf0:
    // 0x1a1bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bf4: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x1A1BF4u;
    SET_GPR_U32(ctx, 31, 0x1A1BFCu);
    ctx->pc = 0x1A1BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BF4u;
            // 0x1a1bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BFCu; }
        if (ctx->pc != 0x1A1BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BFCu; }
        if (ctx->pc != 0x1A1BFCu) { return; }
    }
    ctx->pc = 0x1A1BFCu;
label_1a1bfc:
    // 0x1a1bfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c00:
    // 0x1a1c00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a1c04: 0x244265b0  addiu       $v0, $v0, 0x65B0
    ctx->pc = 0x1a1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26032));
    // 0x1a1c08: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a1c0c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x1a1c0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1c10: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1C10u;
    {
        const bool branch_taken_0x1a1c10 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A1C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C10u;
            // 0x1a1c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c10) {
            ctx->pc = 0x1A1C30u;
            goto label_1a1c30;
        }
    }
    ctx->pc = 0x1A1C18u;
    // 0x1a1c18: 0xc0671d4  jal         func_19C750
    ctx->pc = 0x1A1C18u;
    SET_GPR_U32(ctx, 31, 0x1A1C20u);
    ctx->pc = 0x1A1C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C18u;
            // 0x1a1c1c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C20u; }
        if (ctx->pc != 0x1A1C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C20u; }
        if (ctx->pc != 0x1A1C20u) { return; }
    }
    ctx->pc = 0x1A1C20u;
label_1a1c20:
    // 0x1a1c20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a1c20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a1c24: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1a1c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a1c28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A1C28u;
    {
        const bool branch_taken_0x1a1c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c28) {
            ctx->pc = 0x1A1C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1c00;
        }
    }
    ctx->pc = 0x1A1C30u;
label_1a1c30:
    // 0x1a1c30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c38: 0xc0671d4  jal         func_19C750
    ctx->pc = 0x1A1C38u;
    SET_GPR_U32(ctx, 31, 0x1A1C40u);
    ctx->pc = 0x1A1C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C38u;
            // 0x1a1c3c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C40u; }
        if (ctx->pc != 0x1A1C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C40u; }
        if (ctx->pc != 0x1A1C40u) { return; }
    }
    ctx->pc = 0x1A1C40u;
label_1a1c40:
    // 0x1a1c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1c44: 0x12830004  beq         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1C44u;
    {
        const bool branch_taken_0x1a1c44 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C44u;
            // 0x1a1c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c44) {
            ctx->pc = 0x1A1C58u;
            goto label_1a1c58;
        }
    }
    ctx->pc = 0x1A1C4Cu;
    // 0x1a1c4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1c50: 0x1683000f  bne         $s4, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A1C50u;
    {
        const bool branch_taken_0x1a1c50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C50u;
            // 0x1a1c54: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c50) {
            ctx->pc = 0x1A1C90u;
            goto label_1a1c90;
        }
    }
    ctx->pc = 0x1A1C58u;
label_1a1c58:
    // 0x1a1c58: 0xc066e80  jal         func_19BA00
    ctx->pc = 0x1A1C58u;
    SET_GPR_U32(ctx, 31, 0x1A1C60u);
    ctx->pc = 0x1A1C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C58u;
            // 0x1a1c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA00u;
    if (runtime->hasFunction(0x19BA00u)) {
        auto targetFn = runtime->lookupFunction(0x19BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C60u; }
        if (ctx->pc != 0x1A1C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeavePartyMember__16CUserDataManagerFi_0x19ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C60u; }
        if (ctx->pc != 0x1A1C60u) { return; }
    }
    ctx->pc = 0x1A1C60u;
label_1a1c60:
    // 0x1a1c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c64: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1A1C64u;
    SET_GPR_U32(ctx, 31, 0x1A1C6Cu);
    ctx->pc = 0x1A1C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C64u;
            // 0x1a1c68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C6Cu; }
        if (ctx->pc != 0x1A1C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C6Cu; }
        if (ctx->pc != 0x1A1C6Cu) { return; }
    }
    ctx->pc = 0x1A1C6Cu;
label_1a1c6c:
    // 0x1a1c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1c70: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1C70u;
    {
        const bool branch_taken_0x1a1c70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C70u;
            // 0x1a1c74: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c70) {
            ctx->pc = 0x1A1C88u;
            goto label_1a1c88;
        }
    }
    ctx->pc = 0x1A1C78u;
    // 0x1a1c78: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A1C78u;
    SET_GPR_U32(ctx, 31, 0x1A1C80u);
    ctx->pc = 0x1A1C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C78u;
            // 0x1a1c7c: 0x26240170  addiu       $a0, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C80u; }
        if (ctx->pc != 0x1A1C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C80u; }
        if (ctx->pc != 0x1A1C80u) { return; }
    }
    ctx->pc = 0x1A1C80u;
label_1a1c80:
    // 0x1a1c80: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A1C80u;
    SET_GPR_U32(ctx, 31, 0x1A1C88u);
    ctx->pc = 0x1A1C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C80u;
            // 0x1a1c84: 0x262401dc  addiu       $a0, $s1, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C88u; }
        if (ctx->pc != 0x1A1C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C88u; }
        if (ctx->pc != 0x1A1C88u) { return; }
    }
    ctx->pc = 0x1A1C88u;
label_1a1c88:
    // 0x1a1c88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c8c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a1c90:
    // 0x1a1c90: 0x16830006  bne         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1C90u;
    {
        const bool branch_taken_0x1a1c90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C90u;
            // 0x1a1c94: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c90) {
            ctx->pc = 0x1A1CACu;
            goto label_1a1cac;
        }
    }
    ctx->pc = 0x1A1C98u;
    // 0x1a1c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c9c: 0xc066e80  jal         func_19BA00
    ctx->pc = 0x1A1C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1CA4u);
    ctx->pc = 0x1A1CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C9Cu;
            // 0x1a1ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA00u;
    if (runtime->hasFunction(0x19BA00u)) {
        auto targetFn = runtime->lookupFunction(0x19BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CA4u; }
        if (ctx->pc != 0x1A1CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeavePartyMember__16CUserDataManagerFi_0x19ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CA4u; }
        if (ctx->pc != 0x1A1CA4u) { return; }
    }
    ctx->pc = 0x1A1CA4u;
label_1a1ca4:
    // 0x1a1ca4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ca8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a1cac:
    // 0x1a1cac: 0x16830003  bne         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1CACu;
    {
        const bool branch_taken_0x1a1cac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CACu;
            // 0x1a1cb0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cac) {
            ctx->pc = 0x1A1CBCu;
            goto label_1a1cbc;
        }
    }
    ctx->pc = 0x1A1CB4u;
    // 0x1a1cb4: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1a1cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1a1cb8: 0x263164d0  addiu       $s1, $s1, 0x64D0
    ctx->pc = 0x1a1cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25808));
label_1a1cbc:
    // 0x1a1cbc: 0x16830010  bne         $s4, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1CBCu;
    {
        const bool branch_taken_0x1a1cbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CBCu;
            // 0x1a1cc0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cbc) {
            ctx->pc = 0x1A1D00u;
            goto label_1a1d00;
        }
    }
    ctx->pc = 0x1A1CC4u;
    // 0x1a1cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1cc8: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x1A1CC8u;
    SET_GPR_U32(ctx, 31, 0x1A1CD0u);
    ctx->pc = 0x1A1CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CC8u;
            // 0x1a1ccc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CD0u; }
        if (ctx->pc != 0x1A1CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CD0u; }
        if (ctx->pc != 0x1A1CD0u) { return; }
    }
    ctx->pc = 0x1A1CD0u;
label_1a1cd0:
    // 0x1a1cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1cd4: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x1A1CD4u;
    SET_GPR_U32(ctx, 31, 0x1A1CDCu);
    ctx->pc = 0x1A1CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CD4u;
            // 0x1a1cd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CDCu; }
        if (ctx->pc != 0x1A1CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CDCu; }
        if (ctx->pc != 0x1A1CDCu) { return; }
    }
    ctx->pc = 0x1A1CDCu;
label_1a1cdc:
    // 0x1a1cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ce0: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x1A1CE0u;
    SET_GPR_U32(ctx, 31, 0x1A1CE8u);
    ctx->pc = 0x1A1CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CE0u;
            // 0x1a1ce4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CE8u; }
        if (ctx->pc != 0x1A1CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CE8u; }
        if (ctx->pc != 0x1A1CE8u) { return; }
    }
    ctx->pc = 0x1A1CE8u;
label_1a1ce8:
    // 0x1a1ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1cec: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x1A1CECu;
    SET_GPR_U32(ctx, 31, 0x1A1CF4u);
    ctx->pc = 0x1A1CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CECu;
            // 0x1a1cf0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CF4u; }
        if (ctx->pc != 0x1A1CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CF4u; }
        if (ctx->pc != 0x1A1CF4u) { return; }
    }
    ctx->pc = 0x1A1CF4u;
label_1a1cf4:
    // 0x1a1cf4: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1a1cf8: 0x26316500  addiu       $s1, $s1, 0x6500
    ctx->pc = 0x1a1cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25856));
    // 0x1a1cfc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a1d00:
    // 0x1a1d00: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1D00u;
    {
        const bool branch_taken_0x1a1d00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D00u;
            // 0x1a1d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d00) {
            ctx->pc = 0x1A1D18u;
            goto label_1a1d18;
        }
    }
    ctx->pc = 0x1A1D08u;
    // 0x1a1d08: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x1A1D08u;
    SET_GPR_U32(ctx, 31, 0x1A1D10u);
    ctx->pc = 0x1A1D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D08u;
            // 0x1a1d0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D10u; }
        if (ctx->pc != 0x1A1D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D10u; }
        if (ctx->pc != 0x1A1D10u) { return; }
    }
    ctx->pc = 0x1A1D10u;
label_1a1d10:
    // 0x1a1d10: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1a1d14: 0x26316560  addiu       $s1, $s1, 0x6560
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25952));
label_1a1d18:
    // 0x1a1d18: 0xdf848b88  ld          $a0, -0x7478($gp)
    ctx->pc = 0x1a1d18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937480)));
    // 0x1a1d1c: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1a1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1a1d20: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a1d24: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1D24u;
    {
        const bool branch_taken_0x1a1d24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D24u;
            // 0x1a1d28: 0xfca40000  sd          $a0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d24) {
            ctx->pc = 0x1A1D38u;
            goto label_1a1d38;
        }
    }
    ctx->pc = 0x1A1D2Cu;
    // 0x1a1d2c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1a1d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1a1d30: 0x279180c0  addiu       $s1, $gp, -0x7F40
    ctx->pc = 0x1a1d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934720));
    // 0x1a1d34: 0x265264b4  addiu       $s2, $s2, 0x64B4
    ctx->pc = 0x1a1d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 25780));
label_1a1d38:
    // 0x1a1d38: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a1d3c: 0x1683000a  bne         $s4, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1D3Cu;
    {
        const bool branch_taken_0x1a1d3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D3Cu;
            // 0x1a1d40: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d3c) {
            ctx->pc = 0x1A1D68u;
            goto label_1a1d68;
        }
    }
    ctx->pc = 0x1A1D44u;
    // 0x1a1d44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1d48: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1a1d48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1a1d4c: 0xa7a30078  sh          $v1, 0x78($sp)
    ctx->pc = 0x1a1d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1d50: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1a1d50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1a1d54: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1a1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1a1d58: 0x263165d0  addiu       $s1, $s1, 0x65D0
    ctx->pc = 0x1a1d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26064));
    // 0x1a1d5c: 0xa7a3007a  sh          $v1, 0x7A($sp)
    ctx->pc = 0x1a1d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1d60: 0x265263b0  addiu       $s2, $s2, 0x63B0
    ctx->pc = 0x1a1d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 25520));
    // 0x1a1d64: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a1d68:
    // 0x1a1d68: 0x1683000e  bne         $s4, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A1D68u;
    {
        const bool branch_taken_0x1a1d68 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D68u;
            // 0x1a1d6c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d68) {
            ctx->pc = 0x1A1DA4u;
            goto label_1a1da4;
        }
    }
    ctx->pc = 0x1A1D70u;
    // 0x1a1d70: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1a1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a1d74: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1a1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1a1d78: 0xa7a40078  sh          $a0, 0x78($sp)
    ctx->pc = 0x1a1d78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1d7c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1a1d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1a1d80: 0xa7a3007a  sh          $v1, 0x7A($sp)
    ctx->pc = 0x1a1d80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1d84: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1a1d84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1a1d88: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1a1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a1d8c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1a1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1a1d90: 0x26316600  addiu       $s1, $s1, 0x6600
    ctx->pc = 0x1a1d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26112));
    // 0x1a1d94: 0x265263b0  addiu       $s2, $s2, 0x63B0
    ctx->pc = 0x1a1d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 25520));
    // 0x1a1d98: 0xa7a4007c  sh          $a0, 0x7C($sp)
    ctx->pc = 0x1a1d98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1d9c: 0xa7a3007e  sh          $v1, 0x7E($sp)
    ctx->pc = 0x1a1d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1da0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a1da4:
    // 0x1a1da4: 0x12830004  beq         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1DA4u;
    {
        const bool branch_taken_0x1a1da4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DA4u;
            // 0x1a1da8: 0x260440b8  addiu       $a0, $s0, 0x40B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1da4) {
            ctx->pc = 0x1A1DB8u;
            goto label_1a1db8;
        }
    }
    ctx->pc = 0x1A1DACu;
    // 0x1a1dac: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1a1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1db0: 0x16830012  bne         $s4, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1DB0u;
    {
        const bool branch_taken_0x1a1db0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1db0) {
            ctx->pc = 0x1A1DFCu;
            goto label_1a1dfc;
        }
    }
    ctx->pc = 0x1A1DB8u;
label_1a1db8:
    // 0x1a1db8: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A1DB8u;
    SET_GPR_U32(ctx, 31, 0x1A1DC0u);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DC0u; }
        if (ctx->pc != 0x1A1DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DC0u; }
        if (ctx->pc != 0x1A1DC0u) { return; }
    }
    ctx->pc = 0x1A1DC0u;
label_1a1dc0:
    // 0x1a1dc0: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A1DC0u;
    SET_GPR_U32(ctx, 31, 0x1A1DC8u);
    ctx->pc = 0x1A1DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DC0u;
            // 0x1a1dc4: 0x26044124  addiu       $a0, $s0, 0x4124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DC8u; }
        if (ctx->pc != 0x1A1DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DC8u; }
        if (ctx->pc != 0x1A1DC8u) { return; }
    }
    ctx->pc = 0x1A1DC8u;
label_1a1dc8:
    // 0x1a1dc8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1a1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1dcc: 0x16830008  bne         $s4, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1DCCu;
    {
        const bool branch_taken_0x1a1dcc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DCCu;
            // 0x1a1dd0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dcc) {
            ctx->pc = 0x1A1DF0u;
            goto label_1a1df0;
        }
    }
    ctx->pc = 0x1A1DD4u;
    // 0x1a1dd4: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1a1dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1a1dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1de0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a1de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a1de4: 0xc067558  jal         func_19D560
    ctx->pc = 0x1A1DE4u;
    SET_GPR_U32(ctx, 31, 0x1A1DECu);
    ctx->pc = 0x1A1DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DE4u;
            // 0x1a1de8: 0x26316630  addiu       $s1, $s1, 0x6630 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DECu; }
        if (ctx->pc != 0x1A1DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DECu; }
        if (ctx->pc != 0x1A1DECu) { return; }
    }
    ctx->pc = 0x1A1DECu;
label_1a1dec:
    // 0x1a1dec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a1decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a1df0:
    // 0x1a1df0: 0x16830002  bne         $s4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1DF0u;
    {
        const bool branch_taken_0x1a1df0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1df0) {
            ctx->pc = 0x1A1DFCu;
            goto label_1a1dfc;
        }
    }
    ctx->pc = 0x1A1DF8u;
    // 0x1a1df8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dfc:
    // 0x1a1dfc: 0x12200096  beqz        $s1, . + 4 + (0x96 << 2)
    ctx->pc = 0x1A1DFCu;
    {
        const bool branch_taken_0x1a1dfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DFCu;
            // 0x1a1e00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dfc) {
            ctx->pc = 0x1A2058u;
            goto label_1a2058;
        }
    }
    ctx->pc = 0x1A1E04u;
    // 0x1a1e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1E04u;
    {
        const bool branch_taken_0x1a1e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e04) {
            ctx->pc = 0x1A1E1Cu;
            goto label_1a1e1c;
        }
    }
    ctx->pc = 0x1A1E0Cu;
label_1a1e0c:
    // 0x1a1e0c: 0x84660002  lh          $a2, 0x2($v1)
    ctx->pc = 0x1a1e0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a1e10: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x1A1E10u;
    SET_GPR_U32(ctx, 31, 0x1A1E18u);
    ctx->pc = 0x1A1E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E10u;
            // 0x1a1e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E18u; }
        if (ctx->pc != 0x1A1E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E18u; }
        if (ctx->pc != 0x1A1E18u) { return; }
    }
    ctx->pc = 0x1A1E18u;
label_1a1e18:
    // 0x1a1e18: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a1e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1a1e1c:
    // 0x1a1e1c: 0x0  nop
    ctx->pc = 0x1a1e1cu;
    // NOP
    // 0x1a1e20: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x1a1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1a1e24: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x1a1e24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1e28: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A1E28u;
    {
        const bool branch_taken_0x1a1e28 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1a1e28) {
            ctx->pc = 0x1A1E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1e0c;
        }
    }
    ctx->pc = 0x1A1E30u;
    // 0x1a1e30: 0x16800012  bnez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1E30u;
    {
        const bool branch_taken_0x1a1e30 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E30u;
            // 0x1a1e34: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e30) {
            ctx->pc = 0x1A1E7Cu;
            goto label_1a1e7c;
        }
    }
    ctx->pc = 0x1A1E38u;
    // 0x1a1e38: 0x26044eb0  addiu       $a0, $s0, 0x4EB0
    ctx->pc = 0x1a1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20144));
    // 0x1a1e3c: 0xc066b30  jal         func_19ACC0
    ctx->pc = 0x1A1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E44u);
    ctx->pc = 0x1A1E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E3Cu;
            // 0x1a1e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E44u; }
        if (ctx->pc != 0x1A1E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E44u; }
        if (ctx->pc != 0x1A1E44u) { return; }
    }
    ctx->pc = 0x1A1E44u;
label_1a1e44:
    // 0x1a1e44: 0x26044eb0  addiu       $a0, $s0, 0x4EB0
    ctx->pc = 0x1a1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20144));
    // 0x1a1e48: 0xc066b30  jal         func_19ACC0
    ctx->pc = 0x1A1E48u;
    SET_GPR_U32(ctx, 31, 0x1A1E50u);
    ctx->pc = 0x1A1E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E48u;
            // 0x1a1e4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E50u; }
        if (ctx->pc != 0x1A1E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E50u; }
        if (ctx->pc != 0x1A1E50u) { return; }
    }
    ctx->pc = 0x1A1E50u;
label_1a1e50:
    // 0x1a1e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e54: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x1a1e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x1a1e58: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x1A1E58u;
    SET_GPR_U32(ctx, 31, 0x1A1E60u);
    ctx->pc = 0x1A1E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E58u;
            // 0x1a1e5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E60u; }
        if (ctx->pc != 0x1A1E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E60u; }
        if (ctx->pc != 0x1A1E60u) { return; }
    }
    ctx->pc = 0x1A1E60u;
label_1a1e60:
    // 0x1a1e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e64: 0xc066d14  jal         func_19B450
    ctx->pc = 0x1A1E64u;
    SET_GPR_U32(ctx, 31, 0x1A1E6Cu);
    ctx->pc = 0x1A1E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E64u;
            // 0x1a1e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E6Cu; }
        if (ctx->pc != 0x1A1E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E6Cu; }
        if (ctx->pc != 0x1A1E6Cu) { return; }
    }
    ctx->pc = 0x1A1E6Cu;
label_1a1e6c:
    // 0x1a1e6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e70: 0xc094380  jal         func_250E00
    ctx->pc = 0x1A1E70u;
    SET_GPR_U32(ctx, 31, 0x1A1E78u);
    ctx->pc = 0x1A1E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E70u;
            // 0x1a1e74: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250E00u;
    if (runtime->hasFunction(0x250E00u)) {
        auto targetFn = runtime->lookupFunction(0x250E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E78u; }
        if (ctx->pc != 0x1A1E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSeiton__FP13CGameDataUsedi_0x250e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E78u; }
        if (ctx->pc != 0x1A1E78u) { return; }
    }
    ctx->pc = 0x1A1E78u;
label_1a1e78:
    // 0x1a1e78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1e7c:
    // 0x1a1e7c: 0x16830018  bne         $s4, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A1E7Cu;
    {
        const bool branch_taken_0x1a1e7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E7Cu;
            // 0x1a1e80: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e7c) {
            ctx->pc = 0x1A1EE0u;
            goto label_1a1ee0;
        }
    }
    ctx->pc = 0x1A1E84u;
    // 0x1a1e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e8c: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x1A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E94u);
    ctx->pc = 0x1A1E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E8Cu;
            // 0x1a1e90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E94u; }
        if (ctx->pc != 0x1A1E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFii_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E94u; }
        if (ctx->pc != 0x1A1E94u) { return; }
    }
    ctx->pc = 0x1A1E94u;
label_1a1e94:
    // 0x1a1e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e9c: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x1A1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1EA4u);
    ctx->pc = 0x1A1EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E9Cu;
            // 0x1a1ea0: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EA4u; }
        if (ctx->pc != 0x1A1EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFii_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EA4u; }
        if (ctx->pc != 0x1A1EA4u) { return; }
    }
    ctx->pc = 0x1A1EA4u;
label_1a1ea4:
    // 0x1a1ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ea8: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x1a1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x1a1eac: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x1A1EACu;
    SET_GPR_U32(ctx, 31, 0x1A1EB4u);
    ctx->pc = 0x1A1EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EACu;
            // 0x1a1eb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EB4u; }
        if (ctx->pc != 0x1A1EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EB4u; }
        if (ctx->pc != 0x1A1EB4u) { return; }
    }
    ctx->pc = 0x1A1EB4u;
label_1a1eb4:
    // 0x1a1eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1eb8: 0x240500f7  addiu       $a1, $zero, 0xF7
    ctx->pc = 0x1a1eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x1a1ebc: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x1A1EBCu;
    SET_GPR_U32(ctx, 31, 0x1A1EC4u);
    ctx->pc = 0x1A1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EBCu;
            // 0x1a1ec0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EC4u; }
        if (ctx->pc != 0x1A1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EC4u; }
        if (ctx->pc != 0x1A1EC4u) { return; }
    }
    ctx->pc = 0x1A1EC4u;
label_1a1ec4:
    // 0x1a1ec4: 0x26044eb0  addiu       $a0, $s0, 0x4EB0
    ctx->pc = 0x1a1ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20144));
    // 0x1a1ec8: 0xc066b30  jal         func_19ACC0
    ctx->pc = 0x1A1EC8u;
    SET_GPR_U32(ctx, 31, 0x1A1ED0u);
    ctx->pc = 0x1A1ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EC8u;
            // 0x1a1ecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1ED0u; }
        if (ctx->pc != 0x1A1ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1ED0u; }
        if (ctx->pc != 0x1A1ED0u) { return; }
    }
    ctx->pc = 0x1A1ED0u;
label_1a1ed0:
    // 0x1a1ed0: 0x26044eb0  addiu       $a0, $s0, 0x4EB0
    ctx->pc = 0x1a1ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20144));
    // 0x1a1ed4: 0xc066b30  jal         func_19ACC0
    ctx->pc = 0x1A1ED4u;
    SET_GPR_U32(ctx, 31, 0x1A1EDCu);
    ctx->pc = 0x1A1ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1ED4u;
            // 0x1a1ed8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EDCu; }
        if (ctx->pc != 0x1A1EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EDCu; }
        if (ctx->pc != 0x1A1EDCu) { return; }
    }
    ctx->pc = 0x1A1EDCu;
label_1a1edc:
    // 0x1a1edc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a1ee0:
    // 0x1a1ee0: 0x16830024  bne         $s4, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A1EE0u;
    {
        const bool branch_taken_0x1a1ee0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EE0u;
            // 0x1a1ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ee0) {
            ctx->pc = 0x1A1F74u;
            goto label_1a1f74;
        }
    }
    ctx->pc = 0x1A1EE8u;
    // 0x1a1ee8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a1ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1eec: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x1A1EECu;
    SET_GPR_U32(ctx, 31, 0x1A1EF4u);
    ctx->pc = 0x1A1EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EECu;
            // 0x1a1ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EF4u; }
        if (ctx->pc != 0x1A1EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EF4u; }
        if (ctx->pc != 0x1A1EF4u) { return; }
    }
    ctx->pc = 0x1A1EF4u;
label_1a1ef4:
    // 0x1a1ef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1EF4u;
    {
        const bool branch_taken_0x1a1ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EF4u;
            // 0x1a1ef8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ef4) {
            ctx->pc = 0x1A1F04u;
            goto label_1a1f04;
        }
    }
    ctx->pc = 0x1A1EFCu;
    // 0x1a1efc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1a1efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a1f00: 0xa4430022  sh          $v1, 0x22($v0)
    ctx->pc = 0x1a1f00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 3));
label_1a1f04:
    // 0x1a1f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f08: 0xc0674cc  jal         func_19D330
    ctx->pc = 0x1A1F08u;
    SET_GPR_U32(ctx, 31, 0x1A1F10u);
    ctx->pc = 0x1A1F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F08u;
            // 0x1a1f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D330u;
    if (runtime->hasFunction(0x19D330u)) {
        auto targetFn = runtime->lookupFunction(0x19D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F10u; }
        if (ctx->pc != 0x1A1F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFiP13CGameDataUsed_0x19d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F10u; }
        if (ctx->pc != 0x1A1F10u) { return; }
    }
    ctx->pc = 0x1A1F10u;
label_1a1f10:
    // 0x1a1f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f14: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x1a1f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x1a1f18: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x1A1F18u;
    SET_GPR_U32(ctx, 31, 0x1A1F20u);
    ctx->pc = 0x1A1F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F18u;
            // 0x1a1f1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F20u; }
        if (ctx->pc != 0x1A1F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F20u; }
        if (ctx->pc != 0x1A1F20u) { return; }
    }
    ctx->pc = 0x1A1F20u;
label_1a1f20:
    // 0x1a1f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f24: 0x240500f7  addiu       $a1, $zero, 0xF7
    ctx->pc = 0x1a1f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x1a1f28: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x1A1F28u;
    SET_GPR_U32(ctx, 31, 0x1A1F30u);
    ctx->pc = 0x1A1F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F28u;
            // 0x1a1f2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F30u; }
        if (ctx->pc != 0x1A1F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F30u; }
        if (ctx->pc != 0x1A1F30u) { return; }
    }
    ctx->pc = 0x1A1F30u;
label_1a1f30:
    // 0x1a1f30: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1a1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1a1f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f38: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1a1f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a1f3c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1A1F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1F44u);
    ctx->pc = 0x1A1F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F3Cu;
            // 0x1a1f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F44u; }
        if (ctx->pc != 0x1A1F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F44u; }
        if (ctx->pc != 0x1A1F44u) { return; }
    }
    ctx->pc = 0x1A1F44u;
label_1a1f44:
    // 0x1a1f44: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1a1f44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a1f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f4c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1a1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1a1f50: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1a1f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a1f54: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1A1F54u;
    SET_GPR_U32(ctx, 31, 0x1A1F5Cu);
    ctx->pc = 0x1A1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F54u;
            // 0x1a1f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F5Cu; }
        if (ctx->pc != 0x1A1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F5Cu; }
        if (ctx->pc != 0x1A1F5Cu) { return; }
    }
    ctx->pc = 0x1A1F5Cu;
label_1a1f5c:
    // 0x1a1f5c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1a1f5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a1f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f68: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1A1F68u;
    SET_GPR_U32(ctx, 31, 0x1A1F70u);
    ctx->pc = 0x1A1F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F68u;
            // 0x1a1f6c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F70u; }
        if (ctx->pc != 0x1A1F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F70u; }
        if (ctx->pc != 0x1A1F70u) { return; }
    }
    ctx->pc = 0x1A1F70u;
label_1a1f70:
    // 0x1a1f70: 0xa451000a  sh          $s1, 0xA($v0)
    ctx->pc = 0x1a1f70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 17));
label_1a1f74:
    // 0x1a1f74: 0x87b10078  lh          $s1, 0x78($sp)
    ctx->pc = 0x1a1f74u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a1f78: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1a1f78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1f7c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1F7Cu;
    {
        const bool branch_taken_0x1a1f7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F7Cu;
            // 0x1a1f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f7c) {
            ctx->pc = 0x1A1FA0u;
            goto label_1a1fa0;
        }
    }
    ctx->pc = 0x1A1F84u;
    // 0x1a1f84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f88: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x1A1F88u;
    SET_GPR_U32(ctx, 31, 0x1A1F90u);
    ctx->pc = 0x1A1F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F88u;
            // 0x1a1f8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F90u; }
        if (ctx->pc != 0x1A1F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F90u; }
        if (ctx->pc != 0x1A1F90u) { return; }
    }
    ctx->pc = 0x1A1F90u;
label_1a1f90:
    // 0x1a1f90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a1f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f98: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x1A1F98u;
    SET_GPR_U32(ctx, 31, 0x1A1FA0u);
    ctx->pc = 0x1A1F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F98u;
            // 0x1a1f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FA0u; }
        if (ctx->pc != 0x1A1FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFii_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FA0u; }
        if (ctx->pc != 0x1A1FA0u) { return; }
    }
    ctx->pc = 0x1A1FA0u;
label_1a1fa0:
    // 0x1a1fa0: 0x87b1007a  lh          $s1, 0x7A($sp)
    ctx->pc = 0x1a1fa0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 122)));
    // 0x1a1fa4: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1a1fa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1fa8: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1FA8u;
    {
        const bool branch_taken_0x1a1fa8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FA8u;
            // 0x1a1fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fa8) {
            ctx->pc = 0x1A1FCCu;
            goto label_1a1fcc;
        }
    }
    ctx->pc = 0x1A1FB0u;
    // 0x1a1fb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fb4: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x1A1FB4u;
    SET_GPR_U32(ctx, 31, 0x1A1FBCu);
    ctx->pc = 0x1A1FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FB4u;
            // 0x1a1fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FBCu; }
        if (ctx->pc != 0x1A1FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FBCu; }
        if (ctx->pc != 0x1A1FBCu) { return; }
    }
    ctx->pc = 0x1A1FBCu;
label_1a1fbc:
    // 0x1a1fbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a1fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fc4: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x1A1FC4u;
    SET_GPR_U32(ctx, 31, 0x1A1FCCu);
    ctx->pc = 0x1A1FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FC4u;
            // 0x1a1fc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FCCu; }
        if (ctx->pc != 0x1A1FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFii_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FCCu; }
        if (ctx->pc != 0x1A1FCCu) { return; }
    }
    ctx->pc = 0x1A1FCCu;
label_1a1fcc:
    // 0x1a1fcc: 0x87b1007c  lh          $s1, 0x7C($sp)
    ctx->pc = 0x1a1fccu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a1fd0: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1a1fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1fd4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1FD4u;
    {
        const bool branch_taken_0x1a1fd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FD4u;
            // 0x1a1fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fd4) {
            ctx->pc = 0x1A1FF8u;
            goto label_1a1ff8;
        }
    }
    ctx->pc = 0x1A1FDCu;
    // 0x1a1fdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fe0: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x1A1FE0u;
    SET_GPR_U32(ctx, 31, 0x1A1FE8u);
    ctx->pc = 0x1A1FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FE0u;
            // 0x1a1fe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FE8u; }
        if (ctx->pc != 0x1A1FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FE8u; }
        if (ctx->pc != 0x1A1FE8u) { return; }
    }
    ctx->pc = 0x1A1FE8u;
label_1a1fe8:
    // 0x1a1fe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a1fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ff0: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x1A1FF0u;
    SET_GPR_U32(ctx, 31, 0x1A1FF8u);
    ctx->pc = 0x1A1FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FF0u;
            // 0x1a1ff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FF8u; }
        if (ctx->pc != 0x1A1FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFii_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FF8u; }
        if (ctx->pc != 0x1A1FF8u) { return; }
    }
    ctx->pc = 0x1A1FF8u;
label_1a1ff8:
    // 0x1a1ff8: 0x87b1007e  lh          $s1, 0x7E($sp)
    ctx->pc = 0x1a1ff8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x1a1ffc: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1a1ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2000: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2000u;
    {
        const bool branch_taken_0x1a2000 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2000u;
            // 0x1a2004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2000) {
            ctx->pc = 0x1A2024u;
            goto label_1a2024;
        }
    }
    ctx->pc = 0x1A2008u;
    // 0x1a2008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a2008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a200c: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x1A200Cu;
    SET_GPR_U32(ctx, 31, 0x1A2014u);
    ctx->pc = 0x1A2010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A200Cu;
            // 0x1a2010: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2014u; }
        if (ctx->pc != 0x1A2014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2014u; }
        if (ctx->pc != 0x1A2014u) { return; }
    }
    ctx->pc = 0x1A2014u;
label_1a2014:
    // 0x1a2014: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a2014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a201c: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x1A201Cu;
    SET_GPR_U32(ctx, 31, 0x1A2024u);
    ctx->pc = 0x1A2020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A201Cu;
            // 0x1a2020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2024u; }
        if (ctx->pc != 0x1A2024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFii_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2024u; }
        if (ctx->pc != 0x1A2024u) { return; }
    }
    ctx->pc = 0x1A2024u;
label_1a2024:
    // 0x1a2024: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2024u;
    {
        const bool branch_taken_0x1a2024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2024u;
            // 0x1a2028: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2024) {
            ctx->pc = 0x1A2058u;
            goto label_1a2058;
        }
    }
    ctx->pc = 0x1A202Cu;
    // 0x1a202c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A202Cu;
    {
        const bool branch_taken_0x1a202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a202c) {
            ctx->pc = 0x1A2044u;
            goto label_1a2044;
        }
    }
    ctx->pc = 0x1A2034u;
label_1a2034:
    // 0x1a2034: 0x84660002  lh          $a2, 0x2($v1)
    ctx->pc = 0x1a2034u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a2038: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x1A2038u;
    SET_GPR_U32(ctx, 31, 0x1A2040u);
    ctx->pc = 0x1A203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2038u;
            // 0x1a203c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2040u; }
        if (ctx->pc != 0x1A2040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2040u; }
        if (ctx->pc != 0x1A2040u) { return; }
    }
    ctx->pc = 0x1A2040u;
label_1a2040:
    // 0x1a2040: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1a2040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1a2044:
    // 0x1a2044: 0x0  nop
    ctx->pc = 0x1a2044u;
    // NOP
    // 0x1a2048: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1a2048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1a204c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x1a204cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2050: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A2050u;
    {
        const bool branch_taken_0x1a2050 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1a2050) {
            ctx->pc = 0x1A2034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2034;
        }
    }
    ctx->pc = 0x1A2058u;
label_1a2058:
    // 0x1a2058: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a2058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a205c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a2060: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a2060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2064: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a2064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2068: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a2068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a206c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a206cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2070: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a2070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2074: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2074u;
            // 0x1a2078: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A207Cu;
}
