#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuWorkTextureEnter__FiPciii
// Address: 0x251310 - 0x2513a0
void MenuWorkTextureEnter__FiPciii_0x251310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuWorkTextureEnter__FiPciii_0x251310");
#endif

    switch (ctx->pc) {
        case 0x251394u: goto label_251394;
        default: break;
    }

    ctx->pc = 0x251310u;

    // 0x251310: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x251310u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251314: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x251314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251318: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x251318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25131c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25131cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251320: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x251320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x251324: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x251324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25132c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x25132cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251330: 0x30c3003f  andi        $v1, $a2, 0x3F
    ctx->pc = 0x251330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x251334: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251334u;
    {
        const bool branch_taken_0x251334 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x251338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251334u;
            // 0x251338: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251334) {
            ctx->pc = 0x251348u;
            goto label_251348;
        }
    }
    ctx->pc = 0x25133Cu;
    // 0x25133c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25133Cu;
    {
        const bool branch_taken_0x25133c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25133c) {
            ctx->pc = 0x251348u;
            goto label_251348;
        }
    }
    ctx->pc = 0x251344u;
    // 0x251344: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x251344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_251348:
    // 0x251348: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251348u;
    {
        const bool branch_taken_0x251348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251348u;
            // 0x25134c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251348) {
            ctx->pc = 0x251358u;
            goto label_251358;
        }
    }
    ctx->pc = 0x251350u;
    // 0x251350: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x251350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x251354: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x251354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_251358:
    // 0x251358: 0x5210004  bgez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251358u;
    {
        const bool branch_taken_0x251358 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x25135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251358u;
            // 0x25135c: 0x3123003f  andi        $v1, $t1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251358) {
            ctx->pc = 0x25136Cu;
            goto label_25136c;
        }
    }
    ctx->pc = 0x251360u;
    // 0x251360: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x251360u;
    {
        const bool branch_taken_0x251360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x251360) {
            ctx->pc = 0x25136Cu;
            goto label_25136c;
        }
    }
    ctx->pc = 0x251368u;
    // 0x251368: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x251368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_25136c:
    // 0x25136c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25136Cu;
    {
        const bool branch_taken_0x25136c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25136Cu;
            // 0x251370: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25136c) {
            ctx->pc = 0x251380u;
            goto label_251380;
        }
    }
    ctx->pc = 0x251374u;
    // 0x251374: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x251374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x251378: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x251378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25137c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x25137cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_251380:
    // 0x251380: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x251380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x251384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x251384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251388: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x251388u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25138c: 0xc04b450  jal         func_12D140
    ctx->pc = 0x25138Cu;
    SET_GPR_U32(ctx, 31, 0x251394u);
    ctx->pc = 0x251390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25138Cu;
            // 0x251390: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251394u; }
        if (ctx->pc != 0x251394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251394u; }
        if (ctx->pc != 0x251394u) { return; }
    }
    ctx->pc = 0x251394u;
label_251394:
    // 0x251394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251398: 0x3e00008  jr          $ra
    ctx->pc = 0x251398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25139Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251398u;
            // 0x25139c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2513A0u;
}
