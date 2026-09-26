#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PLACE_POS__FP12RS_STACKDATAi
// Address: 0x1e39f0 - 0x1e3a4c
void ps2__GET_PLACE_POS__FP12RS_STACKDATAi_0x1e39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PLACE_POS__FP12RS_STACKDATAi_0x1e39f0");
#endif

    switch (ctx->pc) {
        case 0x1e3a18u: goto label_1e3a18;
        case 0x1e3a2cu: goto label_1e3a2c;
        case 0x1e3a3cu: goto label_1e3a3c;
        default: break;
    }

    ctx->pc = 0x1e39f0u;

    // 0x1e39f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e39f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e39f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e39f8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E39F8u;
    {
        const bool branch_taken_0x1e39f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E39FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39F8u;
            // 0x1e39fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39f8) {
            ctx->pc = 0x1E3A08u;
            goto label_1e3a08;
        }
    }
    ctx->pc = 0x1E3A00u;
    // 0x1e3a00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E3A00u;
    {
        const bool branch_taken_0x1e3a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A00u;
            // 0x1e3a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a00) {
            ctx->pc = 0x1E3A40u;
            goto label_1e3a40;
        }
    }
    ctx->pc = 0x1E3A08u;
label_1e3a08:
    // 0x1e3a08: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3a0c: 0xc44c1030  lwc1        $f12, 0x1030($v0)
    ctx->pc = 0x1e3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e3a10: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E3A10u;
    SET_GPR_U32(ctx, 31, 0x1E3A18u);
    ctx->pc = 0x1E3A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A10u;
            // 0x1e3a14: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A18u; }
        if (ctx->pc != 0x1E3A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A18u; }
        if (ctx->pc != 0x1E3A18u) { return; }
    }
    ctx->pc = 0x1E3A18u;
label_1e3a18:
    // 0x1e3a18: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3a1c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e3a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a20: 0xc44c1034  lwc1        $f12, 0x1034($v0)
    ctx->pc = 0x1e3a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e3a24: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E3A24u;
    SET_GPR_U32(ctx, 31, 0x1E3A2Cu);
    ctx->pc = 0x1E3A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A24u;
            // 0x1e3a28: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A2Cu; }
        if (ctx->pc != 0x1E3A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A2Cu; }
        if (ctx->pc != 0x1E3A2Cu) { return; }
    }
    ctx->pc = 0x1E3A2Cu;
label_1e3a2c:
    // 0x1e3a2c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3a30: 0xc44c1038  lwc1        $f12, 0x1038($v0)
    ctx->pc = 0x1e3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e3a34: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E3A34u;
    SET_GPR_U32(ctx, 31, 0x1E3A3Cu);
    ctx->pc = 0x1E3A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A34u;
            // 0x1e3a38: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A3Cu; }
        if (ctx->pc != 0x1E3A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A3Cu; }
        if (ctx->pc != 0x1E3A3Cu) { return; }
    }
    ctx->pc = 0x1E3A3Cu;
label_1e3a3c:
    // 0x1e3a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3a40:
    // 0x1e3a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3a44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A44u;
            // 0x1e3a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3A4Cu;
}
