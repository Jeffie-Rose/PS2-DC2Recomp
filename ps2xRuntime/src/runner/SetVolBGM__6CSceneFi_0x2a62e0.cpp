#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVolBGM__6CSceneFi
// Address: 0x2a62e0 - 0x2a6350
void SetVolBGM__6CSceneFi_0x2a62e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVolBGM__6CSceneFi_0x2a62e0");
#endif

    switch (ctx->pc) {
        case 0x2a62f8u: goto label_2a62f8;
        case 0x2a630cu: goto label_2a630c;
        case 0x2a6330u: goto label_2a6330;
        default: break;
    }

    ctx->pc = 0x2a62e0u;

    // 0x2a62e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a62e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a62e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a62e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a62e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a62e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a62ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a62ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62f0: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A62F0u;
    SET_GPR_U32(ctx, 31, 0x2A62F8u);
    ctx->pc = 0x2A62F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A62F0u;
            // 0x2a62f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62F8u; }
        if (ctx->pc != 0x2A62F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62F8u; }
        if (ctx->pc != 0x2A62F8u) { return; }
    }
    ctx->pc = 0x2A62F8u;
label_2a62f8:
    // 0x2a62f8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A62F8u;
    {
        const bool branch_taken_0x2a62f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2A62FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A62F8u;
            // 0x2a62fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a62f8) {
            ctx->pc = 0x2A6310u;
            goto label_2a6310;
        }
    }
    ctx->pc = 0x2A6300u;
    // 0x2a6300: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a6300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6304: 0xc063624  jal         func_18D890
    ctx->pc = 0x2A6304u;
    SET_GPR_U32(ctx, 31, 0x2A630Cu);
    ctx->pc = 0x2A6308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6304u;
            // 0x2a6308: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A630Cu; }
        if (ctx->pc != 0x2A630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeDefVol__FUii_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A630Cu; }
        if (ctx->pc != 0x2A630Cu) { return; }
    }
    ctx->pc = 0x2A630Cu;
label_2a630c:
    // 0x2a630c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a630cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6310:
    // 0x2a6310: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a6314: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6314u;
    {
        const bool branch_taken_0x2a6314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a6314) {
            ctx->pc = 0x2A633Cu;
            goto label_2a633c;
        }
    }
    ctx->pc = 0x2A631Cu;
    // 0x2a631c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a631cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a6320: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a6320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6324: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a6324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6328: 0xc063a7c  jal         func_18E9F0
    ctx->pc = 0x2A6328u;
    SET_GPR_U32(ctx, 31, 0x2A6330u);
    ctx->pc = 0x2A632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6328u;
            // 0x2a632c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E9F0u;
    if (runtime->hasFunction(0x18E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6330u; }
        if (ctx->pc != 0x2A6330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVol__FUiiii_0x18e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6330u; }
        if (ctx->pc != 0x2A6330u) { return; }
    }
    ctx->pc = 0x2A6330u;
label_2a6330:
    // 0x2a6330: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x2a6330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x2a6334: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a6334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6338: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2a6338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2a633c:
    // 0x2a633c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a633cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6348: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6348u;
            // 0x2a634c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6350u;
}
