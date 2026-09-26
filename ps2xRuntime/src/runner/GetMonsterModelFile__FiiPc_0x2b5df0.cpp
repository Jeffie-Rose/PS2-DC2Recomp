#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterModelFile__FiiPc
// Address: 0x2b5df0 - 0x2b5f88
void GetMonsterModelFile__FiiPc_0x2b5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterModelFile__FiiPc_0x2b5df0");
#endif

    switch (ctx->pc) {
        case 0x2b5e2cu: goto label_2b5e2c;
        case 0x2b5e48u: goto label_2b5e48;
        case 0x2b5e60u: goto label_2b5e60;
        case 0x2b5e78u: goto label_2b5e78;
        case 0x2b5ea4u: goto label_2b5ea4;
        case 0x2b5ec4u: goto label_2b5ec4;
        case 0x2b5ee8u: goto label_2b5ee8;
        case 0x2b5f00u: goto label_2b5f00;
        case 0x2b5f0cu: goto label_2b5f0c;
        case 0x2b5f20u: goto label_2b5f20;
        case 0x2b5f3cu: goto label_2b5f3c;
        case 0x2b5f54u: goto label_2b5f54;
        case 0x2b5f64u: goto label_2b5f64;
        default: break;
    }

    ctx->pc = 0x2b5df0u;

    // 0x2b5df0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b5df4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b5df8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b5dfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b5dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b5e00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b5e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b5e04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b5e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5e0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b5e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b5e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e14: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5E14u;
    {
        const bool branch_taken_0x2b5e14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E14u;
            // 0x2b5e18: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e14) {
            ctx->pc = 0x2B5E24u;
            goto label_2b5e24;
        }
    }
    ctx->pc = 0x2B5E1Cu;
    // 0x2b5e1c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2B5E1Cu;
    {
        const bool branch_taken_0x2b5e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E1Cu;
            // 0x2b5e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e1c) {
            ctx->pc = 0x2B5F68u;
            goto label_2b5f68;
        }
    }
    ctx->pc = 0x2B5E24u;
label_2b5e24:
    // 0x2b5e24: 0xc076b80  jal         func_1DAE00
    ctx->pc = 0x2B5E24u;
    SET_GPR_U32(ctx, 31, 0x2B5E2Cu);
    ctx->pc = 0x1DAE00u;
    if (runtime->hasFunction(0x1DAE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DAE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E2Cu; }
        if (ctx->pc != 0x2B5E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterTable__Fi_0x1dae00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E2Cu; }
        if (ctx->pc != 0x2B5E2Cu) { return; }
    }
    ctx->pc = 0x2B5E2Cu;
label_2b5e2c:
    // 0x2b5e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e30: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5E30u;
    {
        const bool branch_taken_0x2b5e30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E30u;
            // 0x2b5e34: 0x26140024  addiu       $s4, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e30) {
            ctx->pc = 0x2B5E40u;
            goto label_2b5e40;
        }
    }
    ctx->pc = 0x2B5E38u;
    // 0x2b5e38: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2B5E38u;
    {
        const bool branch_taken_0x2b5e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E38u;
            // 0x2b5e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e38) {
            ctx->pc = 0x2B5F68u;
            goto label_2b5f68;
        }
    }
    ctx->pc = 0x2B5E40u;
label_2b5e40:
    // 0x2b5e40: 0xc04a422  jal         func_129088
    ctx->pc = 0x2B5E40u;
    SET_GPR_U32(ctx, 31, 0x2B5E48u);
    ctx->pc = 0x2B5E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E40u;
            // 0x2b5e44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E48u; }
        if (ctx->pc != 0x2B5E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E48u; }
        if (ctx->pc != 0x2B5E48u) { return; }
    }
    ctx->pc = 0x2B5E48u;
label_2b5e48:
    // 0x2b5e48: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5E48u;
    {
        const bool branch_taken_0x2b5e48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B5E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E48u;
            // 0x2b5e4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e48) {
            ctx->pc = 0x2B5E58u;
            goto label_2b5e58;
        }
    }
    ctx->pc = 0x2B5E50u;
    // 0x2b5e50: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2B5E50u;
    {
        const bool branch_taken_0x2b5e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E50u;
            // 0x2b5e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e50) {
            ctx->pc = 0x2B5F68u;
            goto label_2b5f68;
        }
    }
    ctx->pc = 0x2B5E58u;
label_2b5e58:
    // 0x2b5e58: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2B5E58u;
    SET_GPR_U32(ctx, 31, 0x2B5E60u);
    ctx->pc = 0x2B5E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E58u;
            // 0x2b5e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E60u; }
        if (ctx->pc != 0x2B5E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E60u; }
        if (ctx->pc != 0x2B5E60u) { return; }
    }
    ctx->pc = 0x2B5E60u;
label_2b5e60:
    // 0x2b5e60: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5E60u;
    {
        const bool branch_taken_0x2b5e60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E60u;
            // 0x2b5e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e60) {
            ctx->pc = 0x2B5E7Cu;
            goto label_2b5e7c;
        }
    }
    ctx->pc = 0x2B5E68u;
    // 0x2b5e68: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e70: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5E70u;
    SET_GPR_U32(ctx, 31, 0x2B5E78u);
    ctx->pc = 0x2B5E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E70u;
            // 0x2b5e74: 0x24a5ef00  addiu       $a1, $a1, -0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E78u; }
        if (ctx->pc != 0x2B5E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E78u; }
        if (ctx->pc != 0x2B5E78u) { return; }
    }
    ctx->pc = 0x2B5E78u;
label_2b5e78:
    // 0x2b5e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5e7c:
    // 0x2b5e7c: 0x16420024  bne         $s2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B5E7Cu;
    {
        const bool branch_taken_0x2b5e7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E7Cu;
            // 0x2b5e80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e7c) {
            ctx->pc = 0x2B5F10u;
            goto label_2b5f10;
        }
    }
    ctx->pc = 0x2B5E84u;
    // 0x2b5e84: 0x8e140048  lw          $s4, 0x48($s0)
    ctx->pc = 0x2b5e84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b5e88: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5E88u;
    {
        const bool branch_taken_0x2b5e88 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2B5E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E88u;
            // 0x2b5e8c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e88) {
            ctx->pc = 0x2B5E98u;
            goto label_2b5e98;
        }
    }
    ctx->pc = 0x2B5E90u;
    // 0x2b5e90: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2B5E90u;
    {
        const bool branch_taken_0x2b5e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E90u;
            // 0x2b5e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e90) {
            ctx->pc = 0x2B5F68u;
            goto label_2b5f68;
        }
    }
    ctx->pc = 0x2B5E98u;
label_2b5e98:
    // 0x2b5e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e9c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2B5E9Cu;
    SET_GPR_U32(ctx, 31, 0x2B5EA4u);
    ctx->pc = 0x2B5EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E9Cu;
            // 0x2b5ea0: 0x24a5ef08  addiu       $a1, $a1, -0x10F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EA4u; }
        if (ctx->pc != 0x2B5EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EA4u; }
        if (ctx->pc != 0x2B5EA4u) { return; }
    }
    ctx->pc = 0x2B5EA4u;
label_2b5ea4:
    // 0x2b5ea4: 0x2a81000a  slti        $at, $s4, 0xA
    ctx->pc = 0x2b5ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2b5ea8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5EA8u;
    {
        const bool branch_taken_0x2b5ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5EA8u;
            // 0x2b5eac: 0x2a810064  slti        $at, $s4, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ea8) {
            ctx->pc = 0x2B5ECCu;
            goto label_2b5ecc;
        }
    }
    ctx->pc = 0x2B5EB0u;
    // 0x2b5eb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5eb4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b5eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5eb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b5ebc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B5EBCu;
    SET_GPR_U32(ctx, 31, 0x2B5EC4u);
    ctx->pc = 0x2B5EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5EBCu;
            // 0x2b5ec0: 0x24a5ef18  addiu       $a1, $a1, -0x10E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EC4u; }
        if (ctx->pc != 0x2B5EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EC4u; }
        if (ctx->pc != 0x2B5EC4u) { return; }
    }
    ctx->pc = 0x2B5EC4u;
label_2b5ec4:
    // 0x2b5ec4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B5EC4u;
    {
        const bool branch_taken_0x2b5ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5EC4u;
            // 0x2b5ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ec4) {
            ctx->pc = 0x2B5F04u;
            goto label_2b5f04;
        }
    }
    ctx->pc = 0x2B5ECCu;
label_2b5ecc:
    // 0x2b5ecc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5ECCu;
    {
        const bool branch_taken_0x2b5ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5ECCu;
            // 0x2b5ed0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ecc) {
            ctx->pc = 0x2B5EF0u;
            goto label_2b5ef0;
        }
    }
    ctx->pc = 0x2B5ED4u;
    // 0x2b5ed4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5ed8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b5ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5edc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b5edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b5ee0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B5EE0u;
    SET_GPR_U32(ctx, 31, 0x2B5EE8u);
    ctx->pc = 0x2B5EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5EE0u;
            // 0x2b5ee4: 0x24a5ef28  addiu       $a1, $a1, -0x10D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EE8u; }
        if (ctx->pc != 0x2B5EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EE8u; }
        if (ctx->pc != 0x2B5EE8u) { return; }
    }
    ctx->pc = 0x2B5EE8u;
label_2b5ee8:
    // 0x2b5ee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5EE8u;
    {
        const bool branch_taken_0x2b5ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ee8) {
            ctx->pc = 0x2B5F00u;
            goto label_2b5f00;
        }
    }
    ctx->pc = 0x2B5EF0u;
label_2b5ef0:
    // 0x2b5ef0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b5ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ef4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b5ef8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B5EF8u;
    SET_GPR_U32(ctx, 31, 0x2B5F00u);
    ctx->pc = 0x2B5EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5EF8u;
            // 0x2b5efc: 0x24a5ef38  addiu       $a1, $a1, -0x10C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F00u; }
        if (ctx->pc != 0x2B5F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F00u; }
        if (ctx->pc != 0x2B5F00u) { return; }
    }
    ctx->pc = 0x2B5F00u;
label_2b5f00:
    // 0x2b5f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f04:
    // 0x2b5f04: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5F04u;
    SET_GPR_U32(ctx, 31, 0x2B5F0Cu);
    ctx->pc = 0x2B5F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F04u;
            // 0x2b5f08: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F0Cu; }
        if (ctx->pc != 0x2B5F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F0Cu; }
        if (ctx->pc != 0x2B5F0Cu) { return; }
    }
    ctx->pc = 0x2B5F0Cu;
label_2b5f0c:
    // 0x2b5f0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5f10:
    // 0x2b5f10: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5F10u;
    {
        const bool branch_taken_0x2b5f10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F10u;
            // 0x2b5f14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f10) {
            ctx->pc = 0x2B5F40u;
            goto label_2b5f40;
        }
    }
    ctx->pc = 0x2B5F18u;
    // 0x2b5f18: 0xc066a24  jal         func_19A890
    ctx->pc = 0x2B5F18u;
    SET_GPR_U32(ctx, 31, 0x2B5F20u);
    ctx->pc = 0x2B5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F18u;
            // 0x2b5f1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A890u;
    if (runtime->hasFunction(0x19A890u)) {
        auto targetFn = runtime->lookupFunction(0x19A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F20u; }
        if (ctx->pc != 0x2B5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterHengeParam__Fi_0x19a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F20u; }
        if (ctx->pc != 0x2B5F20u) { return; }
    }
    ctx->pc = 0x2B5F20u;
label_2b5f20:
    // 0x2b5f20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5F20u;
    {
        const bool branch_taken_0x2b5f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f20) {
            ctx->pc = 0x2B5F3Cu;
            goto label_2b5f3c;
        }
    }
    ctx->pc = 0x2B5F28u;
    // 0x2b5f28: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2b5f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b5f2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f34: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B5F34u;
    SET_GPR_U32(ctx, 31, 0x2B5F3Cu);
    ctx->pc = 0x2B5F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F34u;
            // 0x2b5f38: 0x24a5ef48  addiu       $a1, $a1, -0x10B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F3Cu; }
        if (ctx->pc != 0x2B5F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F3Cu; }
        if (ctx->pc != 0x2B5F3Cu) { return; }
    }
    ctx->pc = 0x2B5F3Cu;
label_2b5f3c:
    // 0x2b5f3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b5f40:
    // 0x2b5f40: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5F40u;
    {
        const bool branch_taken_0x2b5f40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F40u;
            // 0x2b5f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f40) {
            ctx->pc = 0x2B5F68u;
            goto label_2b5f68;
        }
    }
    ctx->pc = 0x2B5F48u;
    // 0x2b5f48: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x2b5f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2b5f4c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2B5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F54u);
    ctx->pc = 0x2B5F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F4Cu;
            // 0x2b5f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F54u; }
        if (ctx->pc != 0x2B5F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F54u; }
        if (ctx->pc != 0x2B5F54u) { return; }
    }
    ctx->pc = 0x2B5F54u;
label_2b5f54:
    // 0x2b5f54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f5c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F64u);
    ctx->pc = 0x2B5F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F5Cu;
            // 0x2b5f60: 0x24a5ef50  addiu       $a1, $a1, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F64u; }
        if (ctx->pc != 0x2B5F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F64u; }
        if (ctx->pc != 0x2B5F64u) { return; }
    }
    ctx->pc = 0x2B5F64u;
label_2b5f64:
    // 0x2b5f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5f68:
    // 0x2b5f68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b5f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5f6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b5f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5f70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b5f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5f74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b5f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5f78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5f80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F80u;
            // 0x2b5f84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5F88u;
}
