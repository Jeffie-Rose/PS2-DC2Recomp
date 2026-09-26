#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgCharaDrawGyoRace__FP11SubGameInfo
// Address: 0x307730 - 0x3077ec
void sgCharaDrawGyoRace__FP11SubGameInfo_0x307730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgCharaDrawGyoRace__FP11SubGameInfo_0x307730");
#endif

    switch (ctx->pc) {
        case 0x307754u: goto label_307754;
        case 0x307770u: goto label_307770;
        case 0x307794u: goto label_307794;
        case 0x30779cu: goto label_30779c;
        case 0x3077b4u: goto label_3077b4;
        case 0x3077bcu: goto label_3077bc;
        default: break;
    }

    ctx->pc = 0x307730u;

    // 0x307730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x307730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x307734: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x307734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x307738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30773c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307740: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x307748: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30774c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x30774cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307750: 0x0  nop
    ctx->pc = 0x307750u;
    // NOP
label_307754:
    // 0x307754: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x307754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x307758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30775c: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x30775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
    // 0x307760: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x307760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x307764: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x307764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307768: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x307768u;
    SET_GPR_U32(ctx, 31, 0x307770u);
    ctx->pc = 0x30776Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307768u;
            // 0x30776c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307770u; }
        if (ctx->pc != 0x307770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307770u; }
        if (ctx->pc != 0x307770u) { return; }
    }
    ctx->pc = 0x307770u;
label_307770:
    // 0x307770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x307774: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x307774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x307778: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x307778u;
    {
        const bool branch_taken_0x307778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307778u;
            // 0x30777c: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307778) {
            ctx->pc = 0x307754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307754;
        }
    }
    ctx->pc = 0x307780u;
    // 0x307780: 0x8f85a17c  lw          $a1, -0x5E84($gp)
    ctx->pc = 0x307780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x307784: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x307784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x307788: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x307788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x30778c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x30778Cu;
    SET_GPR_U32(ctx, 31, 0x307794u);
    ctx->pc = 0x307790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30778Cu;
            // 0x307790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307794u; }
        if (ctx->pc != 0x307794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307794u; }
        if (ctx->pc != 0x307794u) { return; }
    }
    ctx->pc = 0x307794u;
label_307794:
    // 0x307794: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x307794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307798: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30779c:
    // 0x30779c: 0x8f82a158  lw          $v0, -0x5EA8($gp)
    ctx->pc = 0x30779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x3077a0: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x3077a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3077a4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3077A4u;
    {
        const bool branch_taken_0x3077a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3077A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3077A4u;
            // 0x3077a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077a4) {
            ctx->pc = 0x3077BCu;
            goto label_3077bc;
        }
    }
    ctx->pc = 0x3077ACu;
    // 0x3077ac: 0xc070a50  jal         func_1C2940
    ctx->pc = 0x3077ACu;
    SET_GPR_U32(ctx, 31, 0x3077B4u);
    ctx->pc = 0x1C2940u;
    if (runtime->hasFunction(0x1C2940u)) {
        auto targetFn = runtime->lookupFunction(0x1C2940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3077B4u; }
        if (ctx->pc != 0x3077B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__15CHitEffectImageFv_0x1c2940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3077B4u; }
        if (ctx->pc != 0x3077B4u) { return; }
    }
    ctx->pc = 0x3077B4u;
label_3077b4:
    // 0x3077b4: 0xc070a98  jal         func_1C2A60
    ctx->pc = 0x3077B4u;
    SET_GPR_U32(ctx, 31, 0x3077BCu);
    ctx->pc = 0x3077B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3077B4u;
            // 0x3077b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2A60u;
    if (runtime->hasFunction(0x1C2A60u)) {
        auto targetFn = runtime->lookupFunction(0x1C2A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3077BCu; }
        if (ctx->pc != 0x3077BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__15CHitEffectImageFv_0x1c2a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3077BCu; }
        if (ctx->pc != 0x3077BCu) { return; }
    }
    ctx->pc = 0x3077BCu;
label_3077bc:
    // 0x3077bc: 0x0  nop
    ctx->pc = 0x3077bcu;
    // NOP
    // 0x3077c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3077c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3077c4: 0x2a020060  slti        $v0, $s0, 0x60
    ctx->pc = 0x3077c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x3077c8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3077C8u;
    {
        const bool branch_taken_0x3077c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3077CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3077C8u;
            // 0x3077cc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077c8) {
            ctx->pc = 0x30779Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30779c;
        }
    }
    ctx->pc = 0x3077D0u;
    // 0x3077d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3077d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3077d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3077d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3077d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3077dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3077dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3077e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3077e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3077e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3077E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3077E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3077E4u;
            // 0x3077e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3077ECu;
}
