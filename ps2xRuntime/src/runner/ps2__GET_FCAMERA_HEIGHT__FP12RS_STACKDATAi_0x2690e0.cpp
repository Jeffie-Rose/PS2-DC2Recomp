#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FCAMERA_HEIGHT__FP12RS_STACKDATAi
// Address: 0x2690e0 - 0x269134
void ps2__GET_FCAMERA_HEIGHT__FP12RS_STACKDATAi_0x2690e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FCAMERA_HEIGHT__FP12RS_STACKDATAi_0x2690e0");
#endif

    switch (ctx->pc) {
        case 0x2690fcu: goto label_2690fc;
        case 0x269114u: goto label_269114;
        case 0x269120u: goto label_269120;
        default: break;
    }

    ctx->pc = 0x2690e0u;

    // 0x2690e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2690e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2690e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2690e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2690e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2690e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2690ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2690ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2690f0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2690f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2690f4: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x2690F4u;
    SET_GPR_U32(ctx, 31, 0x2690FCu);
    ctx->pc = 0x2690F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2690F4u;
            // 0x2690f8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2690FCu; }
        if (ctx->pc != 0x2690FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2690FCu; }
        if (ctx->pc != 0x2690FCu) { return; }
    }
    ctx->pc = 0x2690FCu;
label_2690fc:
    // 0x2690fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2690FCu;
    {
        const bool branch_taken_0x2690fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2690FCu;
            // 0x269100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690fc) {
            ctx->pc = 0x26910Cu;
            goto label_26910c;
        }
    }
    ctx->pc = 0x269104u;
    // 0x269104: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x269104u;
    {
        const bool branch_taken_0x269104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269104u;
            // 0x269108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269104) {
            ctx->pc = 0x269124u;
            goto label_269124;
        }
    }
    ctx->pc = 0x26910Cu;
label_26910c:
    // 0x26910c: 0xc04c690  jal         func_131A40
    ctx->pc = 0x26910Cu;
    SET_GPR_U32(ctx, 31, 0x269114u);
    ctx->pc = 0x131A40u;
    if (runtime->hasFunction(0x131A40u)) {
        auto targetFn = runtime->lookupFunction(0x131A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269114u; }
        if (ctx->pc != 0x269114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHeight__15mgCCameraFollowFv_0x131a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269114u; }
        if (ctx->pc != 0x269114u) { return; }
    }
    ctx->pc = 0x269114u;
label_269114:
    // 0x269114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269118: 0xc097e54  jal         func_25F950
    ctx->pc = 0x269118u;
    SET_GPR_U32(ctx, 31, 0x269120u);
    ctx->pc = 0x26911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269118u;
            // 0x26911c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269120u; }
        if (ctx->pc != 0x269120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269120u; }
        if (ctx->pc != 0x269120u) { return; }
    }
    ctx->pc = 0x269120u;
label_269120:
    // 0x269120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269124:
    // 0x269124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26912c: 0x3e00008  jr          $ra
    ctx->pc = 0x26912Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26912Cu;
            // 0x269130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269134u;
}
