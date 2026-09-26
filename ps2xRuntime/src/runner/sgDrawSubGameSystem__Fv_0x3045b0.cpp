#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgDrawSubGameSystem__Fv
// Address: 0x3045b0 - 0x30464c
void sgDrawSubGameSystem__Fv_0x3045b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgDrawSubGameSystem__Fv_0x3045b0");
#endif

    switch (ctx->pc) {
        case 0x3045c0u: goto label_3045c0;
        case 0x304614u: goto label_304614;
        case 0x304624u: goto label_304624;
        case 0x304634u: goto label_304634;
        default: break;
    }

    ctx->pc = 0x3045b0u;

    // 0x3045b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3045b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3045b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3045b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3045b8: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x3045B8u;
    SET_GPR_U32(ctx, 31, 0x3045C0u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3045C0u; }
        if (ctx->pc != 0x3045C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3045C0u; }
        if (ctx->pc != 0x3045C0u) { return; }
    }
    ctx->pc = 0x3045C0u;
label_3045c0:
    // 0x3045c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3045C0u;
    {
        const bool branch_taken_0x3045c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3045C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045C0u;
            // 0x3045c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045c0) {
            ctx->pc = 0x3045D0u;
            goto label_3045d0;
        }
    }
    ctx->pc = 0x3045C8u;
    // 0x3045c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3045C8u;
    {
        const bool branch_taken_0x3045c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045C8u;
            // 0x3045cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045c8) {
            ctx->pc = 0x304644u;
            goto label_304644;
        }
    }
    ctx->pc = 0x3045D0u;
label_3045d0:
    // 0x3045d0: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x3045d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x3045d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3045d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3045d8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3045D8u;
    {
        const bool branch_taken_0x3045d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3045DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045D8u;
            // 0x3045dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045d8) {
            ctx->pc = 0x304640u;
            goto label_304640;
        }
    }
    ctx->pc = 0x3045E0u;
    // 0x3045e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3045e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3045e4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3045E4u;
    {
        const bool branch_taken_0x3045e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3045E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045E4u;
            // 0x3045e8: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045e4) {
            ctx->pc = 0x30462Cu;
            goto label_30462c;
        }
    }
    ctx->pc = 0x3045ECu;
    // 0x3045ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3045ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3045f0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3045F0u;
    {
        const bool branch_taken_0x3045f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3045F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045F0u;
            // 0x3045f4: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045f0) {
            ctx->pc = 0x30461Cu;
            goto label_30461c;
        }
    }
    ctx->pc = 0x3045F8u;
    // 0x3045f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3045f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3045fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3045FCu;
    {
        const bool branch_taken_0x3045fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045FCu;
            // 0x304600: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045fc) {
            ctx->pc = 0x30460Cu;
            goto label_30460c;
        }
    }
    ctx->pc = 0x304604u;
    // 0x304604: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x304604u;
    {
        const bool branch_taken_0x304604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304604) {
            ctx->pc = 0x30463Cu;
            goto label_30463c;
        }
    }
    ctx->pc = 0x30460Cu;
label_30460c:
    // 0x30460c: 0xc0bf964  jal         func_2FE590
    ctx->pc = 0x30460Cu;
    SET_GPR_U32(ctx, 31, 0x304614u);
    ctx->pc = 0x304610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30460Cu;
            // 0x304610: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE590u;
    if (runtime->hasFunction(0x2FE590u)) {
        auto targetFn = runtime->lookupFunction(0x2FE590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304614u; }
        if (ctx->pc != 0x304614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgSystemDrawFishing__FP11SubGameInfo_0x2fe590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304614u; }
        if (ctx->pc != 0x304614u) { return; }
    }
    ctx->pc = 0x304614u;
label_304614:
    // 0x304614: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x304614u;
    {
        const bool branch_taken_0x304614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304614) {
            ctx->pc = 0x304640u;
            goto label_304640;
        }
    }
    ctx->pc = 0x30461Cu;
label_30461c:
    // 0x30461c: 0xc0c1efc  jal         func_307BF0
    ctx->pc = 0x30461Cu;
    SET_GPR_U32(ctx, 31, 0x304624u);
    ctx->pc = 0x304620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30461Cu;
            // 0x304620: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307BF0u;
    if (runtime->hasFunction(0x307BF0u)) {
        auto targetFn = runtime->lookupFunction(0x307BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304624u; }
        if (ctx->pc != 0x304624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgSysDrawGyoRace__FP11SubGameInfo_0x307bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304624u; }
        if (ctx->pc != 0x304624u) { return; }
    }
    ctx->pc = 0x304624u;
label_304624:
    // 0x304624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304624u;
    {
        const bool branch_taken_0x304624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304624) {
            ctx->pc = 0x304640u;
            goto label_304640;
        }
    }
    ctx->pc = 0x30462Cu;
label_30462c:
    // 0x30462c: 0xc0c5164  jal         func_314590
    ctx->pc = 0x30462Cu;
    SET_GPR_U32(ctx, 31, 0x304634u);
    ctx->pc = 0x304630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30462Cu;
            // 0x304630: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x314590u;
    if (runtime->hasFunction(0x314590u)) {
        auto targetFn = runtime->lookupFunction(0x314590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304634u; }
        if (ctx->pc != 0x304634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgSystemDrawBuggy__FP11SubGameInfo_0x314590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304634u; }
        if (ctx->pc != 0x304634u) { return; }
    }
    ctx->pc = 0x304634u;
label_304634:
    // 0x304634: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x304634u;
    {
        const bool branch_taken_0x304634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304634) {
            ctx->pc = 0x304640u;
            goto label_304640;
        }
    }
    ctx->pc = 0x30463Cu;
label_30463c:
    // 0x30463c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30463cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304640:
    // 0x304640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304644:
    // 0x304644: 0x3e00008  jr          $ra
    ctx->pc = 0x304644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304644u;
            // 0x304648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30464Cu;
}
