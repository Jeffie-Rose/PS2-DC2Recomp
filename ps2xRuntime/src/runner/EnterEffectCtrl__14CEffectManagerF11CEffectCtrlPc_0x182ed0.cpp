#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterEffectCtrl__14CEffectManagerF11CEffectCtrlPc
// Address: 0x182ed0 - 0x182f94
void EnterEffectCtrl__14CEffectManagerF11CEffectCtrlPc_0x182ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterEffectCtrl__14CEffectManagerF11CEffectCtrlPc_0x182ed0");
#endif

    switch (ctx->pc) {
        case 0x182f10u: goto label_182f10;
        case 0x182f34u: goto label_182f34;
        case 0x182f48u: goto label_182f48;
        default: break;
    }

    ctx->pc = 0x182ed0u;

    // 0x182ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182ed4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x182ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x182ed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182edc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182ee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182ee4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x182ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182eec: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x182eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x182ef0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x182EF0u;
    {
        const bool branch_taken_0x182ef0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182EF0u;
            // 0x182ef4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ef0) {
            ctx->pc = 0x182F00u;
            goto label_182f00;
        }
    }
    ctx->pc = 0x182EF8u;
    // 0x182ef8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x182EF8u;
    {
        const bool branch_taken_0x182ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182EF8u;
            // 0x182efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ef8) {
            ctx->pc = 0x182F78u;
            goto label_182f78;
        }
    }
    ctx->pc = 0x182F00u;
label_182f00:
    // 0x182f00: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x182f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x182f04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x182f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f08: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x182F08u;
    {
        const bool branch_taken_0x182f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F08u;
            // 0x182f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f08) {
            ctx->pc = 0x182F68u;
            goto label_182f68;
        }
    }
    ctx->pc = 0x182F10u;
label_182f10:
    // 0x182f10: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x182f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x182f14: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x182F14u;
    {
        const bool branch_taken_0x182f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F14u;
            // 0x182f18: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f14) {
            ctx->pc = 0x182F60u;
            goto label_182f60;
        }
    }
    ctx->pc = 0x182F1Cu;
    // 0x182f1c: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x182f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x182f20: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x182f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x182f24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x182f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182f28: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182f2c: 0xc060450  jal         func_181140
    ctx->pc = 0x182F2Cu;
    SET_GPR_U32(ctx, 31, 0x182F34u);
    ctx->pc = 0x182F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F2Cu;
            // 0x182f30: 0xd12021  addu        $a0, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (runtime->hasFunction(0x181140u)) {
        auto targetFn = runtime->lookupFunction(0x181140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F34u; }
        if (ctx->pc != 0x182F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11CEffectCtrlFRC11CEffectCtrl_0x181140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F34u; }
        if (ctx->pc != 0x182F34u) { return; }
    }
    ctx->pc = 0x182F34u;
label_182f34:
    // 0x182f34: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x182f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x182f38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x182f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f3c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x182f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x182f40: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x182F40u;
    SET_GPR_U32(ctx, 31, 0x182F48u);
    ctx->pc = 0x182F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F40u;
            // 0x182f44: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F48u; }
        if (ctx->pc != 0x182F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F48u; }
        if (ctx->pc != 0x182F48u) { return; }
    }
    ctx->pc = 0x182F48u;
label_182f48:
    // 0x182f48: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x182f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x182f4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x182f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f54: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x182f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x182f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182F58u;
    {
        const bool branch_taken_0x182f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F58u;
            // 0x182f5c: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f58) {
            ctx->pc = 0x182F78u;
            goto label_182f78;
        }
    }
    ctx->pc = 0x182F60u;
label_182f60:
    // 0x182f60: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x182f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x182f64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x182f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_182f68:
    // 0x182f68: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x182f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182f6c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x182F6Cu;
    {
        const bool branch_taken_0x182f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F6Cu;
            // 0x182f70: 0xc41021  addu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f6c) {
            ctx->pc = 0x182F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182f10;
        }
    }
    ctx->pc = 0x182F74u;
    // 0x182f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182f78:
    // 0x182f78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x182f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182f7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182f7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182f80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182f84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x182F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F8Cu;
            // 0x182f90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182F94u;
}
