#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_STATUS__FP12RS_STACKDATAi
// Address: 0x1e7190 - 0x1e721c
void ps2__SET_STATUS__FP12RS_STACKDATAi_0x1e7190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_STATUS__FP12RS_STACKDATAi_0x1e7190");
#endif

    switch (ctx->pc) {
        case 0x1e71acu: goto label_1e71ac;
        case 0x1e71c4u: goto label_1e71c4;
        case 0x1e71e4u: goto label_1e71e4;
        case 0x1e7204u: goto label_1e7204;
        default: break;
    }

    ctx->pc = 0x1e7190u;

    // 0x1e7190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e719c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e719cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e71a0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1e71a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e71a4: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E71A4u;
    SET_GPR_U32(ctx, 31, 0x1E71ACu);
    ctx->pc = 0x1E71A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71A4u;
            // 0x1e71a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71ACu; }
        if (ctx->pc != 0x1E71ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71ACu; }
        if (ctx->pc != 0x1E71ACu) { return; }
    }
    ctx->pc = 0x1E71ACu;
label_1e71ac:
    // 0x1e71ac: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1e71acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e71b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e71b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E71B4u;
    {
        const bool branch_taken_0x1e71b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E71B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71B4u;
            // 0x1e71b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71b4) {
            ctx->pc = 0x1E71C4u;
            goto label_1e71c4;
        }
    }
    ctx->pc = 0x1E71BCu;
    // 0x1e71bc: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E71BCu;
    SET_GPR_U32(ctx, 31, 0x1E71C4u);
    ctx->pc = 0x1E71C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71BCu;
            // 0x1e71c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71C4u; }
        if (ctx->pc != 0x1E71C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71C4u; }
        if (ctx->pc != 0x1E71C4u) { return; }
    }
    ctx->pc = 0x1E71C4u;
label_1e71c4:
    // 0x1e71c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E71C4u;
    {
        const bool branch_taken_0x1e71c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e71c4) {
            ctx->pc = 0x1E71ECu;
            goto label_1e71ec;
        }
    }
    ctx->pc = 0x1E71CCu;
    // 0x1e71cc: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e71d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e71d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71d4: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e71d8: 0x8c460670  lw          $a2, 0x670($v0)
    ctx->pc = 0x1e71d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x1e71dc: 0xc0a11d0  jal         func_284740
    ctx->pc = 0x1E71DCu;
    SET_GPR_U32(ctx, 31, 0x1E71E4u);
    ctx->pc = 0x1E71E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71DCu;
            // 0x1e71e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71E4u; }
        if (ctx->pc != 0x1E71E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71E4u; }
        if (ctx->pc != 0x1E71E4u) { return; }
    }
    ctx->pc = 0x1E71E4u;
label_1e71e4:
    // 0x1e71e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E71E4u;
    {
        const bool branch_taken_0x1e71e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E71E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71E4u;
            // 0x1e71e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71e4) {
            ctx->pc = 0x1E7208u;
            goto label_1e7208;
        }
    }
    ctx->pc = 0x1E71ECu;
label_1e71ec:
    // 0x1e71ec: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e71f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e71f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71f4: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e71f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e71f8: 0x8c460670  lw          $a2, 0x670($v0)
    ctx->pc = 0x1e71f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x1e71fc: 0xc0a11e0  jal         func_284780
    ctx->pc = 0x1E71FCu;
    SET_GPR_U32(ctx, 31, 0x1E7204u);
    ctx->pc = 0x1E7200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71FCu;
            // 0x1e7200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284780u;
    if (runtime->hasFunction(0x284780u)) {
        auto targetFn = runtime->lookupFunction(0x284780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7204u; }
        if (ctx->pc != 0x1E7204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetStatus__6CSceneFiii_0x284780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7204u; }
        if (ctx->pc != 0x1E7204u) { return; }
    }
    ctx->pc = 0x1E7204u;
label_1e7204:
    // 0x1e7204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e7208:
    // 0x1e7208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e720c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e720cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7214: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7214u;
            // 0x1e7218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E721Cu;
}
