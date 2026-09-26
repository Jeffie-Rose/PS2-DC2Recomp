#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitLighting__13mgRENDER_INFOFv
// Address: 0x1392b0 - 0x139314
void InitLighting__13mgRENDER_INFOFv_0x1392b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitLighting__13mgRENDER_INFOFv_0x1392b0");
#endif

    switch (ctx->pc) {
        case 0x1392d8u: goto label_1392d8;
        case 0x1392ecu: goto label_1392ec;
        default: break;
    }

    ctx->pc = 0x1392b0u;

    // 0x1392b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1392b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1392b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1392b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1392b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1392b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1392bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1392bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1392c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1392c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1392c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1392c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1392c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1392cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1392ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1392d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392d4: 0xac8203f0  sw          $v0, 0x3F0($a0)
    ctx->pc = 0x1392d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1008), GPR_U32(ctx, 2));
label_1392d8:
    // 0x1392d8: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1392d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1392dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1392dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392e0: 0x24440400  addiu       $a0, $v0, 0x400
    ctx->pc = 0x1392e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1392e4: 0xc049c86  jal         func_127218
    ctx->pc = 0x1392E4u;
    SET_GPR_U32(ctx, 31, 0x1392ECu);
    ctx->pc = 0x1392E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1392E4u;
            // 0x1392e8: 0x24060150  addiu       $a2, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392ECu; }
        if (ctx->pc != 0x1392ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392ECu; }
        if (ctx->pc != 0x1392ECu) { return; }
    }
    ctx->pc = 0x1392ECu;
label_1392ec:
    // 0x1392ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1392ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1392f0: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x1392f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1392f4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1392F4u;
    {
        const bool branch_taken_0x1392f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1392F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1392F4u;
            // 0x1392f8: 0x26310150  addiu       $s1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392f4) {
            ctx->pc = 0x1392D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1392d8;
        }
    }
    ctx->pc = 0x1392FCu;
    // 0x1392fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1392fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13930c: 0x3e00008  jr          $ra
    ctx->pc = 0x13930Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13930Cu;
            // 0x139310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139314u;
}
