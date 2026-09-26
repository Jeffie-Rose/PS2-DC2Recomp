#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgDrawSubGameChara__Fv
// Address: 0x3044a0 - 0x30453c
void sgDrawSubGameChara__Fv_0x3044a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgDrawSubGameChara__Fv_0x3044a0");
#endif

    switch (ctx->pc) {
        case 0x3044b0u: goto label_3044b0;
        case 0x304504u: goto label_304504;
        case 0x304514u: goto label_304514;
        case 0x304524u: goto label_304524;
        default: break;
    }

    ctx->pc = 0x3044a0u;

    // 0x3044a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3044a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3044a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3044a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3044a8: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x3044A8u;
    SET_GPR_U32(ctx, 31, 0x3044B0u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3044B0u; }
        if (ctx->pc != 0x3044B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3044B0u; }
        if (ctx->pc != 0x3044B0u) { return; }
    }
    ctx->pc = 0x3044B0u;
label_3044b0:
    // 0x3044b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3044B0u;
    {
        const bool branch_taken_0x3044b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3044B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3044B0u;
            // 0x3044b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044b0) {
            ctx->pc = 0x3044C0u;
            goto label_3044c0;
        }
    }
    ctx->pc = 0x3044B8u;
    // 0x3044b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3044B8u;
    {
        const bool branch_taken_0x3044b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3044BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3044B8u;
            // 0x3044bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044b8) {
            ctx->pc = 0x304534u;
            goto label_304534;
        }
    }
    ctx->pc = 0x3044C0u;
label_3044c0:
    // 0x3044c0: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x3044c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x3044c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3044c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3044c8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3044C8u;
    {
        const bool branch_taken_0x3044c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3044CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3044C8u;
            // 0x3044cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044c8) {
            ctx->pc = 0x304530u;
            goto label_304530;
        }
    }
    ctx->pc = 0x3044D0u;
    // 0x3044d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3044d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3044d4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3044D4u;
    {
        const bool branch_taken_0x3044d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3044D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3044D4u;
            // 0x3044d8: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044d4) {
            ctx->pc = 0x30451Cu;
            goto label_30451c;
        }
    }
    ctx->pc = 0x3044DCu;
    // 0x3044dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3044dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3044e0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3044E0u;
    {
        const bool branch_taken_0x3044e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3044E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3044E0u;
            // 0x3044e4: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044e0) {
            ctx->pc = 0x30450Cu;
            goto label_30450c;
        }
    }
    ctx->pc = 0x3044E8u;
    // 0x3044e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3044e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3044ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3044ECu;
    {
        const bool branch_taken_0x3044ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3044F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3044ECu;
            // 0x3044f0: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044ec) {
            ctx->pc = 0x3044FCu;
            goto label_3044fc;
        }
    }
    ctx->pc = 0x3044F4u;
    // 0x3044f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3044F4u;
    {
        const bool branch_taken_0x3044f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3044f4) {
            ctx->pc = 0x30452Cu;
            goto label_30452c;
        }
    }
    ctx->pc = 0x3044FCu;
label_3044fc:
    // 0x3044fc: 0xc0bf854  jal         func_2FE150
    ctx->pc = 0x3044FCu;
    SET_GPR_U32(ctx, 31, 0x304504u);
    ctx->pc = 0x304500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3044FCu;
            // 0x304500: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE150u;
    if (runtime->hasFunction(0x2FE150u)) {
        auto targetFn = runtime->lookupFunction(0x2FE150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304504u; }
        if (ctx->pc != 0x304504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawFishing__FP11SubGameInfo_0x2fe150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304504u; }
        if (ctx->pc != 0x304504u) { return; }
    }
    ctx->pc = 0x304504u;
label_304504:
    // 0x304504: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x304504u;
    {
        const bool branch_taken_0x304504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304504) {
            ctx->pc = 0x304530u;
            goto label_304530;
        }
    }
    ctx->pc = 0x30450Cu;
label_30450c:
    // 0x30450c: 0xc0c1dcc  jal         func_307730
    ctx->pc = 0x30450Cu;
    SET_GPR_U32(ctx, 31, 0x304514u);
    ctx->pc = 0x304510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30450Cu;
            // 0x304510: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307730u;
    if (runtime->hasFunction(0x307730u)) {
        auto targetFn = runtime->lookupFunction(0x307730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304514u; }
        if (ctx->pc != 0x304514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgCharaDrawGyoRace__FP11SubGameInfo_0x307730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304514u; }
        if (ctx->pc != 0x304514u) { return; }
    }
    ctx->pc = 0x304514u;
label_304514:
    // 0x304514: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304514u;
    {
        const bool branch_taken_0x304514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304514) {
            ctx->pc = 0x304530u;
            goto label_304530;
        }
    }
    ctx->pc = 0x30451Cu;
label_30451c:
    // 0x30451c: 0xc0c5108  jal         func_314420
    ctx->pc = 0x30451Cu;
    SET_GPR_U32(ctx, 31, 0x304524u);
    ctx->pc = 0x304520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30451Cu;
            // 0x304520: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x314420u;
    if (runtime->hasFunction(0x314420u)) {
        auto targetFn = runtime->lookupFunction(0x314420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304524u; }
        if (ctx->pc != 0x304524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawBuggy__FP11SubGameInfo_0x314420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304524u; }
        if (ctx->pc != 0x304524u) { return; }
    }
    ctx->pc = 0x304524u;
label_304524:
    // 0x304524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x304524u;
    {
        const bool branch_taken_0x304524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304524) {
            ctx->pc = 0x304530u;
            goto label_304530;
        }
    }
    ctx->pc = 0x30452Cu;
label_30452c:
    // 0x30452c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30452cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304530:
    // 0x304530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304534:
    // 0x304534: 0x3e00008  jr          $ra
    ctx->pc = 0x304534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304534u;
            // 0x304538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30453Cu;
}
