#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcACTIVE_CHARA__FP9SPI_STACKi
// Address: 0x194350 - 0x1943ac
void gcACTIVE_CHARA__FP9SPI_STACKi_0x194350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcACTIVE_CHARA__FP9SPI_STACKi_0x194350");
#endif

    switch (ctx->pc) {
        case 0x194360u: goto label_194360;
        case 0x194388u: goto label_194388;
        case 0x194398u: goto label_194398;
        default: break;
    }

    ctx->pc = 0x194350u;

    // 0x194350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194358: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194358u;
    SET_GPR_U32(ctx, 31, 0x194360u);
    ctx->pc = 0x19435Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194358u;
            // 0x19435c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194360u; }
        if (ctx->pc != 0x194360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194360u; }
        if (ctx->pc != 0x194360u) { return; }
    }
    ctx->pc = 0x194360u;
label_194360:
    // 0x194360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194364: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194364u;
    {
        const bool branch_taken_0x194364 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x194368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194364u;
            // 0x194368: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194364) {
            ctx->pc = 0x194374u;
            goto label_194374;
        }
    }
    ctx->pc = 0x19436Cu;
    // 0x19436c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19436cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194370: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x194370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_194374:
    // 0x194374: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x194374u;
    {
        const bool branch_taken_0x194374 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194374) {
            ctx->pc = 0x194380u;
            goto label_194380;
        }
    }
    ctx->pc = 0x19437Cu;
    // 0x19437c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19437cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194380:
    // 0x194380: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x194380u;
    SET_GPR_U32(ctx, 31, 0x194388u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194388u; }
        if (ctx->pc != 0x194388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194388u; }
        if (ctx->pc != 0x194388u) { return; }
    }
    ctx->pc = 0x194388u;
label_194388:
    // 0x194388: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194388u;
    {
        const bool branch_taken_0x194388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194388u;
            // 0x19438c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194388) {
            ctx->pc = 0x194398u;
            goto label_194398;
        }
    }
    ctx->pc = 0x194390u;
    // 0x194390: 0xc0670f4  jal         func_19C3D0
    ctx->pc = 0x194390u;
    SET_GPR_U32(ctx, 31, 0x194398u);
    ctx->pc = 0x194394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194390u;
            // 0x194394: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194398u; }
        if (ctx->pc != 0x194398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194398u; }
        if (ctx->pc != 0x194398u) { return; }
    }
    ctx->pc = 0x194398u;
label_194398:
    // 0x194398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19439c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1943a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1943a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1943a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1943A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1943A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1943A4u;
            // 0x1943a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1943ACu;
}
