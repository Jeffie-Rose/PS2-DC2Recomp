#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMess__12CLockOnModelFi
// Address: 0x1cb7b0 - 0x1cb858
void DrawMess__12CLockOnModelFi_0x1cb7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMess__12CLockOnModelFi_0x1cb7b0");
#endif

    switch (ctx->pc) {
        case 0x1cb7e8u: goto label_1cb7e8;
        case 0x1cb7fcu: goto label_1cb7fc;
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb838u: goto label_1cb838;
        case 0x1cb840u: goto label_1cb840;
        default: break;
    }

    ctx->pc = 0x1cb7b0u;

    // 0x1cb7b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb7b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cb7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cb7b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb7bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb7c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7c8: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x1cb7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1cb7cc: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CB7CCu;
    {
        const bool branch_taken_0x1cb7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7CCu;
            // 0x1cb7d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7cc) {
            ctx->pc = 0x1CB840u;
            goto label_1cb840;
        }
    }
    ctx->pc = 0x1CB7D4u;
    // 0x1cb7d4: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1cb7d8: 0x264600a0  addiu       $a2, $s2, 0xA0
    ctx->pc = 0x1cb7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1cb7dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7e0: 0xc056400  jal         func_159000
    ctx->pc = 0x1CB7E0u;
    SET_GPR_U32(ctx, 31, 0x1CB7E8u);
    ctx->pc = 0x1CB7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7E0u;
            // 0x1cb7e4: 0x2408ffd0  addiu       $t0, $zero, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159000u;
    if (runtime->hasFunction(0x159000u)) {
        auto targetFn = runtime->lookupFunction(0x159000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7E8u; }
        if (ctx->pc != 0x1CB7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeAnd3DPosSet__6ClsMesFPcPfii_0x159000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7E8u; }
        if (ctx->pc != 0x1CB7E8u) { return; }
    }
    ctx->pc = 0x1CB7E8u;
label_1cb7e8:
    // 0x1cb7e8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB7E8u;
    {
        const bool branch_taken_0x1cb7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7e8) {
            ctx->pc = 0x1CB81Cu;
            goto label_1cb81c;
        }
    }
    ctx->pc = 0x1CB7F0u;
    // 0x1cb7f0: 0x8e500084  lw          $s0, 0x84($s2)
    ctx->pc = 0x1cb7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1cb7f4: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x1CB7F4u;
    SET_GPR_U32(ctx, 31, 0x1CB7FCu);
    ctx->pc = 0x1CB7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7F4u;
            // 0x1cb7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7FCu; }
        if (ctx->pc != 0x1CB7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7FCu; }
        if (ctx->pc != 0x1CB7FCu) { return; }
    }
    ctx->pc = 0x1CB7FCu;
label_1cb7fc:
    // 0x1cb7fc: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x1cb7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x1cb800: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cb800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb804: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x1cb804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x1cb808: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x1cb808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x1cb80c: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x1cb80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x1cb810: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x1cb810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x1cb814: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x1cb814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x1cb818: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x1cb818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_1cb81c:
    // 0x1cb81c: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x1CB81Cu;
    SET_GPR_U32(ctx, 31, 0x1CB824u);
    ctx->pc = 0x1CB820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB81Cu;
            // 0x1cb820: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB824u; }
        if (ctx->pc != 0x1CB824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB824u; }
        if (ctx->pc != 0x1CB824u) { return; }
    }
    ctx->pc = 0x1CB824u;
label_1cb824:
    // 0x1cb824: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1cb824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1cb828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb82c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1cb82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1cb830: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1CB830u;
    SET_GPR_U32(ctx, 31, 0x1CB838u);
    ctx->pc = 0x1CB834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB830u;
            // 0x1cb834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB838u; }
        if (ctx->pc != 0x1CB838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB838u; }
        if (ctx->pc != 0x1CB838u) { return; }
    }
    ctx->pc = 0x1CB838u;
label_1cb838:
    // 0x1cb838: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x1CB838u;
    SET_GPR_U32(ctx, 31, 0x1CB840u);
    ctx->pc = 0x1CB83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB838u;
            // 0x1cb83c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB840u; }
        if (ctx->pc != 0x1CB840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB840u; }
        if (ctx->pc != 0x1CB840u) { return; }
    }
    ctx->pc = 0x1CB840u;
label_1cb840:
    // 0x1cb840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cb840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb84c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb850: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB850u;
            // 0x1cb854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB858u;
}
