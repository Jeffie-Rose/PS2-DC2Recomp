#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawHelpMes__Fv
// Address: 0x3194f0 - 0x319584
void DrawHelpMes__Fv_0x3194f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawHelpMes__Fv_0x3194f0");
#endif

    switch (ctx->pc) {
        case 0x319518u: goto label_319518;
        case 0x31956cu: goto label_31956c;
        case 0x319574u: goto label_319574;
        default: break;
    }

    ctx->pc = 0x3194f0u;

    // 0x3194f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3194f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3194f4: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x3194f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x3194f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3194f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3194fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3194fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319500: 0x8c23807c  lw          $v1, -0x7F84($at)
    ctx->pc = 0x319500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934652)));
    // 0x319504: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x319504u;
    {
        const bool branch_taken_0x319504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x319504) {
            ctx->pc = 0x319574u;
            goto label_319574;
        }
    }
    ctx->pc = 0x31950Cu;
    // 0x31950c: 0x3c1001f6  lui         $s0, 0x1F6
    ctx->pc = 0x31950cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)502 << 16));
    // 0x319510: 0xc0c63e0  jal         func_318F80
    ctx->pc = 0x319510u;
    SET_GPR_U32(ctx, 31, 0x319518u);
    ctx->pc = 0x319514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319510u;
            // 0x319514: 0x261009d0  addiu       $s0, $s0, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318F80u;
    if (runtime->hasFunction(0x318F80u)) {
        auto targetFn = runtime->lookupFunction(0x318F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319518u; }
        if (ctx->pc != 0x319518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHepMesInfo__Fv_0x318f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319518u; }
        if (ctx->pc != 0x319518u) { return; }
    }
    ctx->pc = 0x319518u;
label_319518:
    // 0x319518: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x319518u;
    {
        const bool branch_taken_0x319518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319518) {
            ctx->pc = 0x319574u;
            goto label_319574;
        }
    }
    ctx->pc = 0x319520u;
    // 0x319520: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x319520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319524: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x319524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x319528: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x319528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x31952c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x319530: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319530u;
    {
        const bool branch_taken_0x319530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319530) {
            ctx->pc = 0x319540u;
            goto label_319540;
        }
    }
    ctx->pc = 0x319538u;
    // 0x319538: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x319538u;
    {
        const bool branch_taken_0x319538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319538u;
            // 0x31953c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319538) {
            ctx->pc = 0x319578u;
            goto label_319578;
        }
    }
    ctx->pc = 0x319540u;
label_319540:
    // 0x319540: 0x8f83a32c  lw          $v1, -0x5CD4($gp)
    ctx->pc = 0x319540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943532)));
    // 0x319544: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319544u;
    {
        const bool branch_taken_0x319544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319544) {
            ctx->pc = 0x319554u;
            goto label_319554;
        }
    }
    ctx->pc = 0x31954Cu;
    // 0x31954c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31954Cu;
    {
        const bool branch_taken_0x31954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31954Cu;
            // 0x319550: 0xaf80a32c  sw          $zero, -0x5CD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31954c) {
            ctx->pc = 0x319574u;
            goto label_319574;
        }
    }
    ctx->pc = 0x319554u;
label_319554:
    // 0x319554: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319558: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x319558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x31955c: 0x8c2524fc  lw          $a1, 0x24FC($at)
    ctx->pc = 0x31955cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9468)));
    // 0x319560: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x319560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x319564: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x319564u;
    SET_GPR_U32(ctx, 31, 0x31956Cu);
    ctx->pc = 0x319568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319564u;
            // 0x319568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31956Cu; }
        if (ctx->pc != 0x31956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31956Cu; }
        if (ctx->pc != 0x31956Cu) { return; }
    }
    ctx->pc = 0x31956Cu;
label_31956c:
    // 0x31956c: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x31956Cu;
    SET_GPR_U32(ctx, 31, 0x319574u);
    ctx->pc = 0x319570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31956Cu;
            // 0x319570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319574u; }
        if (ctx->pc != 0x319574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319574u; }
        if (ctx->pc != 0x319574u) { return; }
    }
    ctx->pc = 0x319574u;
label_319574:
    // 0x319574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_319578:
    // 0x319578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31957c: 0x3e00008  jr          $ra
    ctx->pc = 0x31957Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31957Cu;
            // 0x319580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319584u;
}
