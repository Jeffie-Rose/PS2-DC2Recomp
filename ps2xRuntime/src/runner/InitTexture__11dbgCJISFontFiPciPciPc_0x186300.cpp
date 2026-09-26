#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitTexture__11dbgCJISFontFiPciPciPc
// Address: 0x186300 - 0x186368
void InitTexture__11dbgCJISFontFiPciPciPc_0x186300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTexture__11dbgCJISFontFiPciPciPc_0x186300");
#endif

    switch (ctx->pc) {
        case 0x186338u: goto label_186338;
        case 0x186344u: goto label_186344;
        case 0x186350u: goto label_186350;
        default: break;
    }

    ctx->pc = 0x186300u;

    // 0x186300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186304: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18630c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186310: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x186310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186318: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x186318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18631c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x18631cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x186320: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x186320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186324: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x186324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x186328: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x186328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18632c: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x18632cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x186330: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x186330u;
    SET_GPR_U32(ctx, 31, 0x186338u);
    ctx->pc = 0x186334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186330u;
            // 0x186334: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186338u; }
        if (ctx->pc != 0x186338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186338u; }
        if (ctx->pc != 0x186338u) { return; }
    }
    ctx->pc = 0x186338u;
label_186338:
    // 0x186338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18633c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x18633Cu;
    SET_GPR_U32(ctx, 31, 0x186344u);
    ctx->pc = 0x186340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18633Cu;
            // 0x186340: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186344u; }
        if (ctx->pc != 0x186344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186344u; }
        if (ctx->pc != 0x186344u) { return; }
    }
    ctx->pc = 0x186344u;
label_186344:
    // 0x186344: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x186344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x186348: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x186348u;
    SET_GPR_U32(ctx, 31, 0x186350u);
    ctx->pc = 0x18634Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186348u;
            // 0x18634c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186350u; }
        if (ctx->pc != 0x186350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186350u; }
        if (ctx->pc != 0x186350u) { return; }
    }
    ctx->pc = 0x186350u;
label_186350:
    // 0x186350: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x186350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18635c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18635cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186360: 0x3e00008  jr          $ra
    ctx->pc = 0x186360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186360u;
            // 0x186364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186368u;
}
