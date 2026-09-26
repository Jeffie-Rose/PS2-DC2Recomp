#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_WEIGHT__FP12RS_STACKDATAi
// Address: 0x26c040 - 0x26c08c
void ps2__GET_CHARA_WEIGHT__FP12RS_STACKDATAi_0x26c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_WEIGHT__FP12RS_STACKDATAi_0x26c040");
#endif

    switch (ctx->pc) {
        case 0x26c054u: goto label_26c054;
        case 0x26c05cu: goto label_26c05c;
        case 0x26c078u: goto label_26c078;
        default: break;
    }

    ctx->pc = 0x26c040u;

    // 0x26c040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c04c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C04Cu;
    SET_GPR_U32(ctx, 31, 0x26C054u);
    ctx->pc = 0x26C050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C04Cu;
            // 0x26c050: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C054u; }
        if (ctx->pc != 0x26C054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C054u; }
        if (ctx->pc != 0x26C054u) { return; }
    }
    ctx->pc = 0x26C054u;
label_26c054:
    // 0x26c054: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26C054u;
    SET_GPR_U32(ctx, 31, 0x26C05Cu);
    ctx->pc = 0x26C058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C054u;
            // 0x26c058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C05Cu; }
        if (ctx->pc != 0x26C05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C05Cu; }
        if (ctx->pc != 0x26C05Cu) { return; }
    }
    ctx->pc = 0x26C05Cu;
label_26c05c:
    // 0x26c05c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C05Cu;
    {
        const bool branch_taken_0x26c05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c05c) {
            ctx->pc = 0x26C06Cu;
            goto label_26c06c;
        }
    }
    ctx->pc = 0x26C064u;
    // 0x26c064: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26C064u;
    {
        const bool branch_taken_0x26c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C064u;
            // 0x26c068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c064) {
            ctx->pc = 0x26C07Cu;
            goto label_26c07c;
        }
    }
    ctx->pc = 0x26C06Cu;
label_26c06c:
    // 0x26c06c: 0xc44c0114  lwc1        $f12, 0x114($v0)
    ctx->pc = 0x26c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c070: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26C070u;
    SET_GPR_U32(ctx, 31, 0x26C078u);
    ctx->pc = 0x26C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C070u;
            // 0x26c074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C078u; }
        if (ctx->pc != 0x26C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C078u; }
        if (ctx->pc != 0x26C078u) { return; }
    }
    ctx->pc = 0x26C078u;
label_26c078:
    // 0x26c078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c07c:
    // 0x26c07c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c084: 0x3e00008  jr          $ra
    ctx->pc = 0x26C084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C084u;
            // 0x26c088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C08Cu;
}
