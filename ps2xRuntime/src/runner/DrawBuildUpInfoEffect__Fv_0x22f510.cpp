#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawBuildUpInfoEffect__Fv
// Address: 0x22f510 - 0x22f5a4
void DrawBuildUpInfoEffect__Fv_0x22f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawBuildUpInfoEffect__Fv_0x22f510");
#endif

    switch (ctx->pc) {
        case 0x22f560u: goto label_22f560;
        case 0x22f56cu: goto label_22f56c;
        case 0x22f578u: goto label_22f578;
        default: break;
    }

    ctx->pc = 0x22f510u;

    // 0x22f510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f520: 0x8f83948c  lw          $v1, -0x6B74($gp)
    ctx->pc = 0x22f520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939788)));
    // 0x22f524: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x22F524u;
    {
        const bool branch_taken_0x22f524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f524) {
            ctx->pc = 0x22F590u;
            goto label_22f590;
        }
    }
    ctx->pc = 0x22F52Cu;
    // 0x22f52c: 0x8f839480  lw          $v1, -0x6B80($gp)
    ctx->pc = 0x22f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939776)));
    // 0x22f530: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F530u;
    {
        const bool branch_taken_0x22f530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f530) {
            ctx->pc = 0x22F540u;
            goto label_22f540;
        }
    }
    ctx->pc = 0x22F538u;
    // 0x22f538: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22F538u;
    {
        const bool branch_taken_0x22f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F538u;
            // 0x22f53c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f538) {
            ctx->pc = 0x22F594u;
            goto label_22f594;
        }
    }
    ctx->pc = 0x22F540u;
label_22f540:
    // 0x22f540: 0x8f83947c  lw          $v1, -0x6B84($gp)
    ctx->pc = 0x22f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939772)));
    // 0x22f544: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22F544u;
    {
        const bool branch_taken_0x22f544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f544) {
            ctx->pc = 0x22F590u;
            goto label_22f590;
        }
    }
    ctx->pc = 0x22F54Cu;
    // 0x22f54c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x22f54cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f550: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22f550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22f554: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22f554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22f558: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x22F558u;
    SET_GPR_U32(ctx, 31, 0x22F560u);
    ctx->pc = 0x22F55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F558u;
            // 0x22f55c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F560u; }
        if (ctx->pc != 0x22F560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F560u; }
        if (ctx->pc != 0x22F560u) { return; }
    }
    ctx->pc = 0x22F560u;
label_22f560:
    // 0x22f560: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22f560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f564: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22F564u;
    {
        const bool branch_taken_0x22f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F564u;
            // 0x22f568: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f564) {
            ctx->pc = 0x22F580u;
            goto label_22f580;
        }
    }
    ctx->pc = 0x22F56Cu;
label_22f56c:
    // 0x22f56c: 0x8f829480  lw          $v0, -0x6B80($gp)
    ctx->pc = 0x22f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939776)));
    // 0x22f570: 0xc08bc18  jal         func_22F060
    ctx->pc = 0x22F570u;
    SET_GPR_U32(ctx, 31, 0x22F578u);
    ctx->pc = 0x22F574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F570u;
            // 0x22f574: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F060u;
    if (runtime->hasFunction(0x22F060u)) {
        auto targetFn = runtime->lookupFunction(0x22F060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F578u; }
        if (ctx->pc != 0x22F578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__16CEffVerticalLineFv_0x22f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F578u; }
        if (ctx->pc != 0x22F578u) { return; }
    }
    ctx->pc = 0x22F578u;
label_22f578:
    // 0x22f578: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x22f578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x22f57c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22f57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22f580:
    // 0x22f580: 0x8f839484  lw          $v1, -0x6B7C($gp)
    ctx->pc = 0x22f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939780)));
    // 0x22f584: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x22f584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22f588: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22F588u;
    {
        const bool branch_taken_0x22f588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f588) {
            ctx->pc = 0x22F56Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f56c;
        }
    }
    ctx->pc = 0x22F590u;
label_22f590:
    // 0x22f590: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22f594:
    // 0x22f594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f59c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F59Cu;
            // 0x22f5a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F5A4u;
}
