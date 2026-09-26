#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DEF_BGM_NO__FP12RS_STACKDATAi
// Address: 0x274080 - 0x27412c
void ps2__GET_DEF_BGM_NO__FP12RS_STACKDATAi_0x274080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DEF_BGM_NO__FP12RS_STACKDATAi_0x274080");
#endif

    switch (ctx->pc) {
        case 0x2740b4u: goto label_2740b4;
        case 0x2740c4u: goto label_2740c4;
        case 0x2740d0u: goto label_2740d0;
        case 0x2740dcu: goto label_2740dc;
        case 0x2740f8u: goto label_2740f8;
        case 0x274100u: goto label_274100;
        case 0x27410cu: goto label_27410c;
        case 0x274118u: goto label_274118;
        default: break;
    }

    ctx->pc = 0x274080u;

    // 0x274080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27408c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274090: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x274090u;
    {
        const bool branch_taken_0x274090 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x274094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274090u;
            // 0x274094: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274090) {
            ctx->pc = 0x2740E4u;
            goto label_2740e4;
        }
    }
    ctx->pc = 0x274098u;
    // 0x274098: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x274098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27409c: 0x8c642e64  lw          $a0, 0x2E64($v1)
    ctx->pc = 0x27409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11876)));
    // 0x2740a0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2740a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2740a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2740A4u;
    {
        const bool branch_taken_0x2740a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2740A4u;
            // 0x2740a8: 0x8c622e60  lw          $v0, 0x2E60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740a4) {
            ctx->pc = 0x2740BCu;
            goto label_2740bc;
        }
    }
    ctx->pc = 0x2740ACu;
    // 0x2740ac: 0xc0b49dc  jal         func_2D2770
    ctx->pc = 0x2740ACu;
    SET_GPR_U32(ctx, 31, 0x2740B4u);
    ctx->pc = 0x2D2770u;
    if (runtime->hasFunction(0x2D2770u)) {
        auto targetFn = runtime->lookupFunction(0x2D2770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740B4u; }
        if (ctx->pc != 0x2740B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapSndDataID__Fi_0x2d2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740B4u; }
        if (ctx->pc != 0x2740B4u) { return; }
    }
    ctx->pc = 0x2740B4u;
label_2740b4:
    // 0x2740b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2740B4u;
    {
        const bool branch_taken_0x2740b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2740B4u;
            // 0x2740b8: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740b4) {
            ctx->pc = 0x2740C8u;
            goto label_2740c8;
        }
    }
    ctx->pc = 0x2740BCu;
label_2740bc:
    // 0x2740bc: 0xc0b49dc  jal         func_2D2770
    ctx->pc = 0x2740BCu;
    SET_GPR_U32(ctx, 31, 0x2740C4u);
    ctx->pc = 0x2740C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2740BCu;
            // 0x2740c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2770u;
    if (runtime->hasFunction(0x2D2770u)) {
        auto targetFn = runtime->lookupFunction(0x2D2770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740C4u; }
        if (ctx->pc != 0x2740C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapSndDataID__Fi_0x2d2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740C4u; }
        if (ctx->pc != 0x2740C4u) { return; }
    }
    ctx->pc = 0x2740C4u;
label_2740c4:
    // 0x2740c4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2740c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2740c8:
    // 0x2740c8: 0xc0a9b30  jal         func_2A6CC0
    ctx->pc = 0x2740C8u;
    SET_GPR_U32(ctx, 31, 0x2740D0u);
    ctx->pc = 0x2740CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2740C8u;
            // 0x2740cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CC0u;
    if (runtime->hasFunction(0x2A6CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740D0u; }
        if (ctx->pc != 0x2740D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefBgmNo__6CSceneFi_0x2a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740D0u; }
        if (ctx->pc != 0x2740D0u) { return; }
    }
    ctx->pc = 0x2740D0u;
label_2740d0:
    // 0x2740d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2740d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740d4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2740D4u;
    SET_GPR_U32(ctx, 31, 0x2740DCu);
    ctx->pc = 0x2740D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2740D4u;
            // 0x2740d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740DCu; }
        if (ctx->pc != 0x2740DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740DCu; }
        if (ctx->pc != 0x2740DCu) { return; }
    }
    ctx->pc = 0x2740DCu;
label_2740dc:
    // 0x2740dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2740DCu;
    {
        const bool branch_taken_0x2740dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2740DCu;
            // 0x2740e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740dc) {
            ctx->pc = 0x27411Cu;
            goto label_27411c;
        }
    }
    ctx->pc = 0x2740E4u;
label_2740e4:
    // 0x2740e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2740e8: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2740E8u;
    {
        const bool branch_taken_0x2740e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2740ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2740E8u;
            // 0x2740ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740e8) {
            ctx->pc = 0x27411Cu;
            goto label_27411c;
        }
    }
    ctx->pc = 0x2740F0u;
    // 0x2740f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2740F0u;
    SET_GPR_U32(ctx, 31, 0x2740F8u);
    ctx->pc = 0x2740F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2740F0u;
            // 0x2740f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740F8u; }
        if (ctx->pc != 0x2740F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740F8u; }
        if (ctx->pc != 0x2740F8u) { return; }
    }
    ctx->pc = 0x2740F8u;
label_2740f8:
    // 0x2740f8: 0xc0b49dc  jal         func_2D2770
    ctx->pc = 0x2740F8u;
    SET_GPR_U32(ctx, 31, 0x274100u);
    ctx->pc = 0x2740FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2740F8u;
            // 0x2740fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2770u;
    if (runtime->hasFunction(0x2D2770u)) {
        auto targetFn = runtime->lookupFunction(0x2D2770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274100u; }
        if (ctx->pc != 0x274100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapSndDataID__Fi_0x2d2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274100u; }
        if (ctx->pc != 0x274100u) { return; }
    }
    ctx->pc = 0x274100u;
label_274100:
    // 0x274100: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x274104: 0xc0a9b30  jal         func_2A6CC0
    ctx->pc = 0x274104u;
    SET_GPR_U32(ctx, 31, 0x27410Cu);
    ctx->pc = 0x274108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274104u;
            // 0x274108: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CC0u;
    if (runtime->hasFunction(0x2A6CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27410Cu; }
        if (ctx->pc != 0x27410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefBgmNo__6CSceneFi_0x2a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27410Cu; }
        if (ctx->pc != 0x27410Cu) { return; }
    }
    ctx->pc = 0x27410Cu;
label_27410c:
    // 0x27410c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27410cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274110: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x274110u;
    SET_GPR_U32(ctx, 31, 0x274118u);
    ctx->pc = 0x274114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274110u;
            // 0x274114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274118u; }
        if (ctx->pc != 0x274118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274118u; }
        if (ctx->pc != 0x274118u) { return; }
    }
    ctx->pc = 0x274118u;
label_274118:
    // 0x274118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27411c:
    // 0x27411c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27411cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274124: 0x3e00008  jr          $ra
    ctx->pc = 0x274124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274124u;
            // 0x274128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27412Cu;
}
