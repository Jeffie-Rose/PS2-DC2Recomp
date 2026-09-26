#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceMSIn_PutExcMsg
// Address: 0x123de8 - 0x123e60
void sceMSIn_PutExcMsg_0x123de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMSIn_PutExcMsg_0x123de8");
#endif

    switch (ctx->pc) {
        case 0x123e10u: goto label_123e10;
        case 0x123e18u: goto label_123e18;
        case 0x123e38u: goto label_123e38;
        default: break;
    }

    ctx->pc = 0x123de8u;

    // 0x123de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123dec: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x123decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123df4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x123df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123df8: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x123df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x123dfc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x123dfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x123e00: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123E00u;
    {
        const bool branch_taken_0x123e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E00u;
            // 0x123e04: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e00) {
            ctx->pc = 0x123E20u;
            goto label_123e20;
        }
    }
    ctx->pc = 0x123E08u;
    // 0x123e08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x123E08u;
    {
        const bool branch_taken_0x123e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E08u;
            // 0x123e0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e08) {
            ctx->pc = 0x123E54u;
            goto label_123e54;
        }
    }
    ctx->pc = 0x123E10u;
label_123e10:
    // 0x123e10: 0xc048f28  jal         func_123CA0
    ctx->pc = 0x123E10u;
    SET_GPR_U32(ctx, 31, 0x123E18u);
    ctx->pc = 0x123CA0u;
    if (runtime->hasFunction(0x123CA0u)) {
        auto targetFn = runtime->lookupFunction(0x123CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E18u; }
        if (ctx->pc != 0x123E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        put_message_0x123ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E18u; }
        if (ctx->pc != 0x123E18u) { return; }
    }
    ctx->pc = 0x123E18u;
label_123e18:
    // 0x123e18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x123E18u;
    {
        const bool branch_taken_0x123e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E18u;
            // 0x123e1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e18) {
            ctx->pc = 0x123E58u;
            goto label_123e58;
        }
    }
    ctx->pc = 0x123E20u;
label_123e20:
    // 0x123e20: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x123e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x123e24: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x123E24u;
    {
        const bool branch_taken_0x123e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E24u;
            // 0x123e28: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e24) {
            ctx->pc = 0x123E50u;
            goto label_123e50;
        }
    }
    ctx->pc = 0x123E2Cu;
    // 0x123e2c: 0x240300f7  addiu       $v1, $zero, 0xF7
    ctx->pc = 0x123e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x123e30: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x123e30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x123e34: 0x0  nop
    ctx->pc = 0x123e34u;
    // NOP
label_123e38:
    // 0x123e38: 0x1043fff5  beq         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x123E38u;
    {
        const bool branch_taken_0x123e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x123E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E38u;
            // 0x123e3c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e38) {
            ctx->pc = 0x123E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123e10;
        }
    }
    ctx->pc = 0x123E40u;
    // 0x123e40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x123e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x123e44: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x123e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x123e48: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x123E48u;
    {
        const bool branch_taken_0x123e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e48) {
            ctx->pc = 0x123E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123E48u;
            // 0x123e4c: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123e38;
        }
    }
    ctx->pc = 0x123E50u;
label_123e50:
    // 0x123e50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123e54:
    // 0x123e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123e58:
    // 0x123e58: 0x3e00008  jr          $ra
    ctx->pc = 0x123E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E58u;
            // 0x123e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123E60u;
}
