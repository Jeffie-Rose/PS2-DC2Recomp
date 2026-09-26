#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTitleId__8CAquaMesFi
// Address: 0x211260 - 0x2112c8
void SetTitleId__8CAquaMesFi_0x211260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTitleId__8CAquaMesFi_0x211260");
#endif

    switch (ctx->pc) {
        case 0x211280u: goto label_211280;
        case 0x211288u: goto label_211288;
        default: break;
    }

    ctx->pc = 0x211260u;

    // 0x211260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21126c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x21126cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x211270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211274: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x211274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x211278: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x211278u;
    SET_GPR_U32(ctx, 31, 0x211280u);
    ctx->pc = 0x21127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211278u;
            // 0x21127c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211280u; }
        if (ctx->pc != 0x211280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211280u; }
        if (ctx->pc != 0x211280u) { return; }
    }
    ctx->pc = 0x211280u;
label_211280:
    // 0x211280: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x211280u;
    SET_GPR_U32(ctx, 31, 0x211288u);
    ctx->pc = 0x211284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211280u;
            // 0x211284: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211288u; }
        if (ctx->pc != 0x211288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211288u; }
        if (ctx->pc != 0x211288u) { return; }
    }
    ctx->pc = 0x211288u;
label_211288:
    // 0x211288: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x211288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21128c: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x21128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x211290: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x211290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x211294: 0x8cc51e14  lw          $a1, 0x1E14($a2)
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7700)));
    // 0x211298: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x211298u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x21129c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x21129cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2112a0: 0xacc40190  sw          $a0, 0x190($a2)
    ctx->pc = 0x2112a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 400), GPR_U32(ctx, 4));
    // 0x2112a4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2112a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2112a8: 0x8ca400c4  lw          $a0, 0xC4($a1)
    ctx->pc = 0x2112a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2112ac: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2112acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2112b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2112b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2112b4: 0xaca30194  sw          $v1, 0x194($a1)
    ctx->pc = 0x2112b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 404), GPR_U32(ctx, 3));
    // 0x2112b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2112b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2112bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2112bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2112c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2112C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2112C0u;
            // 0x2112c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2112C8u;
}
