#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateEffSpt__16CEffectScriptManFPcii
// Address: 0x2e1260 - 0x2e12c4
void CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateEffSpt__16CEffectScriptManFPcii_0x2e1260");
#endif

    switch (ctx->pc) {
        case 0x2e1284u: goto label_2e1284;
        case 0x2e1298u: goto label_2e1298;
        default: break;
    }

    ctx->pc = 0x2e1260u;

    // 0x2e1260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e1260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e1264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e1264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e1268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e126c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1270: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e1270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1278: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e1278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e127c: 0xc0b7fcc  jal         func_2DFF30
    ctx->pc = 0x2E127Cu;
    SET_GPR_U32(ctx, 31, 0x2E1284u);
    ctx->pc = 0x2E1280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E127Cu;
            // 0x2e1280: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF30u;
    if (runtime->hasFunction(0x2DFF30u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1284u; }
        if (ctx->pc != 0x2E1284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseNo__16CEffectScriptManFPc_0x2dff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1284u; }
        if (ctx->pc != 0x2E1284u) { return; }
    }
    ctx->pc = 0x2E1284u;
label_2e1284:
    // 0x2e1284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e1284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1288: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e1288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e128c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e128cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1290: 0xc0b8358  jal         func_2E0D60
    ctx->pc = 0x2E1290u;
    SET_GPR_U32(ctx, 31, 0x2E1298u);
    ctx->pc = 0x2E1294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1290u;
            // 0x2e1294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (runtime->hasFunction(0x2E0D60u)) {
        auto targetFn = runtime->lookupFunction(0x2E0D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1298u; }
        if (ctx->pc != 0x2E1298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFiii_0x2e0d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1298u; }
        if (ctx->pc != 0x2E1298u) { return; }
    }
    ctx->pc = 0x2E1298u;
label_2e1298:
    // 0x2e1298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1298u;
    {
        const bool branch_taken_0x2e1298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1298) {
            ctx->pc = 0x2E12A8u;
            goto label_2e12a8;
        }
    }
    ctx->pc = 0x2E12A0u;
    // 0x2e12a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E12A0u;
    {
        const bool branch_taken_0x2e12a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12A0u;
            // 0x2e12a4: 0x8c4200ac  lw          $v0, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12a0) {
            ctx->pc = 0x2E12ACu;
            goto label_2e12ac;
        }
    }
    ctx->pc = 0x2E12A8u;
label_2e12a8:
    // 0x2e12a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e12ac:
    // 0x2e12ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e12acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e12b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e12b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e12b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e12b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e12b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e12b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e12bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E12BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E12C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12BCu;
            // 0x2e12c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E12C4u;
}
