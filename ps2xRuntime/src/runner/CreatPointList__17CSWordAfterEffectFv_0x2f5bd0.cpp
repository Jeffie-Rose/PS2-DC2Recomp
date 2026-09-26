#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatPointList__17CSWordAfterEffectFv
// Address: 0x2f5bd0 - 0x2f5c78
void CreatPointList__17CSWordAfterEffectFv_0x2f5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPointList__17CSWordAfterEffectFv_0x2f5bd0");
#endif

    switch (ctx->pc) {
        case 0x2f5c0cu: goto label_2f5c0c;
        case 0x2f5c2cu: goto label_2f5c2c;
        case 0x2f5c48u: goto label_2f5c48;
        default: break;
    }

    ctx->pc = 0x2f5bd0u;

    // 0x2f5bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f5bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5bdc: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2f5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2f5be0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F5BE0u;
    {
        const bool branch_taken_0x2f5be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5BE0u;
            // 0x2f5be4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5be0) {
            ctx->pc = 0x2F5C68u;
            goto label_2f5c68;
        }
    }
    ctx->pc = 0x2F5BE8u;
    // 0x2f5be8: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x2f5be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2f5bec: 0x18c0001e  blez        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F5BECu;
    {
        const bool branch_taken_0x2f5bec = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2f5bec) {
            ctx->pc = 0x2F5C68u;
            goto label_2f5c68;
        }
    }
    ctx->pc = 0x2F5BF4u;
    // 0x2f5bf4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2f5bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f5bf8: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x2f5bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f5bfc: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x2f5bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2f5c00: 0x8e090078  lw          $t1, 0x78($s0)
    ctx->pc = 0x2f5c00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2f5c04: 0xc0bd520  jal         func_2F5480
    ctx->pc = 0x2F5C04u;
    SET_GPR_U32(ctx, 31, 0x2F5C0Cu);
    ctx->pc = 0x2F5C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C04u;
            // 0x2f5c08: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5480u;
    if (runtime->hasFunction(0x2F5480u)) {
        auto targetFn = runtime->lookupFunction(0x2F5480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5C0Cu; }
        if (ctx->pc != 0x2F5C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatSmoothPassSW__FPA4_fPA4_fiiii_0x2f5480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5C0Cu; }
        if (ctx->pc != 0x2F5C0Cu) { return; }
    }
    ctx->pc = 0x2F5C0Cu;
label_2f5c0c:
    // 0x2f5c0c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2f5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2f5c10: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2f5c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f5c14: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x2f5c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2f5c18: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x2f5c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f5c1c: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x2f5c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2f5c20: 0x8e090078  lw          $t1, 0x78($s0)
    ctx->pc = 0x2f5c20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2f5c24: 0xc0bd520  jal         func_2F5480
    ctx->pc = 0x2F5C24u;
    SET_GPR_U32(ctx, 31, 0x2F5C2Cu);
    ctx->pc = 0x2F5C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C24u;
            // 0x2f5c28: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5480u;
    if (runtime->hasFunction(0x2F5480u)) {
        auto targetFn = runtime->lookupFunction(0x2F5480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5C2Cu; }
        if (ctx->pc != 0x2F5C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatSmoothPassSW__FPA4_fPA4_fiiii_0x2f5480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5C2Cu; }
        if (ctx->pc != 0x2F5C2Cu) { return; }
    }
    ctx->pc = 0x2F5C2Cu;
label_2f5c2c:
    // 0x2f5c2c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2f5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f5c30: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F5C30u;
    {
        const bool branch_taken_0x2f5c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c30) {
            ctx->pc = 0x2F5C68u;
            goto label_2f5c68;
        }
    }
    ctx->pc = 0x2F5C38u;
    // 0x2f5c38: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2f5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2f5c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5C40u;
    {
        const bool branch_taken_0x2f5c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C40u;
            // 0x2f5c44: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c40) {
            ctx->pc = 0x2F5C4Cu;
            goto label_2f5c4c;
        }
    }
    ctx->pc = 0x2F5C48u;
label_2f5c48:
    // 0x2f5c48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f5c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f5c4c:
    // 0x2f5c4c: 0x0  nop
    ctx->pc = 0x2f5c4cu;
    // NOP
    // 0x2f5c50: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2f5c50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f5c54: 0x0  nop
    ctx->pc = 0x2f5c54u;
    // NOP
    // 0x2f5c58: 0x0  nop
    ctx->pc = 0x2f5c58u;
    // NOP
    // 0x2f5c5c: 0x0  nop
    ctx->pc = 0x2f5c5cu;
    // NOP
    // 0x2f5c60: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F5C60u;
    {
        const bool branch_taken_0x2f5c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c60) {
            ctx->pc = 0x2F5C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5c48;
        }
    }
    ctx->pc = 0x2F5C68u;
label_2f5c68:
    // 0x2f5c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f5c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C70u;
            // 0x2f5c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5C78u;
}
