#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetOrigin__14CEffectManagerFPf
// Address: 0x1830c0 - 0x18313c
void SetOrigin__14CEffectManagerFPf_0x1830c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOrigin__14CEffectManagerFPf_0x1830c0");
#endif

    switch (ctx->pc) {
        case 0x1830ecu: goto label_1830ec;
        case 0x183108u: goto label_183108;
        default: break;
    }

    ctx->pc = 0x1830c0u;

    // 0x1830c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1830c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1830c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1830c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1830c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1830c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1830cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1830ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1830d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1830d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1830d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1830d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1830d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1830dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1830e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1830e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1830E4u;
    {
        const bool branch_taken_0x1830e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1830E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1830E4u;
            // 0x1830e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830e4) {
            ctx->pc = 0x183110u;
            goto label_183110;
        }
    }
    ctx->pc = 0x1830ECu;
label_1830ec:
    // 0x1830ec: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1830f0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1830f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1830f4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1830f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1830f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1830F8u;
    {
        const bool branch_taken_0x1830f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1830FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1830F8u;
            // 0x1830fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830f8) {
            ctx->pc = 0x183108u;
            goto label_183108;
        }
    }
    ctx->pc = 0x183100u;
    // 0x183100: 0xc06044c  jal         func_181130
    ctx->pc = 0x183100u;
    SET_GPR_U32(ctx, 31, 0x183108u);
    ctx->pc = 0x181130u;
    if (runtime->hasFunction(0x181130u)) {
        auto targetFn = runtime->lookupFunction(0x181130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183108u; }
        if (ctx->pc != 0x183108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOrigin__11CEffectCtrlFPf_0x181130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183108u; }
        if (ctx->pc != 0x183108u) { return; }
    }
    ctx->pc = 0x183108u;
label_183108:
    // 0x183108: 0x26310310  addiu       $s1, $s1, 0x310
    ctx->pc = 0x183108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x18310c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18310cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_183110:
    // 0x183110: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x183110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x183114: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x183114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x183118: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x183118u;
    {
        const bool branch_taken_0x183118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183118) {
            ctx->pc = 0x1830ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1830ec;
        }
    }
    ctx->pc = 0x183120u;
    // 0x183120: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x183120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18312c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18312cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183134: 0x3e00008  jr          $ra
    ctx->pc = 0x183134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183134u;
            // 0x183138: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18313Cu;
}
