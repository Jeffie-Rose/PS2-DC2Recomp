#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ORIGIN__FP12RS_STACKDATAi
// Address: 0x2e3d00 - 0x2e3d5c
void ps2__GET_ORIGIN__FP12RS_STACKDATAi_0x2e3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ORIGIN__FP12RS_STACKDATAi_0x2e3d00");
#endif

    switch (ctx->pc) {
        case 0x2e3d28u: goto label_2e3d28;
        case 0x2e3d3cu: goto label_2e3d3c;
        case 0x2e3d4cu: goto label_2e3d4c;
        default: break;
    }

    ctx->pc = 0x2e3d00u;

    // 0x2e3d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3d04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3d08: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3D08u;
    {
        const bool branch_taken_0x2e3d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D08u;
            // 0x2e3d0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d08) {
            ctx->pc = 0x2E3D18u;
            goto label_2e3d18;
        }
    }
    ctx->pc = 0x2E3D10u;
    // 0x2e3d10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E3D10u;
    {
        const bool branch_taken_0x2e3d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D10u;
            // 0x2e3d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d10) {
            ctx->pc = 0x2E3D50u;
            goto label_2e3d50;
        }
    }
    ctx->pc = 0x2E3D18u;
label_2e3d18:
    // 0x2e3d18: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3d1c: 0xc44c00b0  lwc1        $f12, 0xB0($v0)
    ctx->pc = 0x2e3d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3d20: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3D20u;
    SET_GPR_U32(ctx, 31, 0x2E3D28u);
    ctx->pc = 0x2E3D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D20u;
            // 0x2e3d24: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D28u; }
        if (ctx->pc != 0x2E3D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D28u; }
        if (ctx->pc != 0x2E3D28u) { return; }
    }
    ctx->pc = 0x2E3D28u;
label_2e3d28:
    // 0x2e3d28: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3d2c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e3d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d30: 0xc44c00b4  lwc1        $f12, 0xB4($v0)
    ctx->pc = 0x2e3d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3d34: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3D34u;
    SET_GPR_U32(ctx, 31, 0x2E3D3Cu);
    ctx->pc = 0x2E3D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D34u;
            // 0x2e3d38: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D3Cu; }
        if (ctx->pc != 0x2E3D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D3Cu; }
        if (ctx->pc != 0x2E3D3Cu) { return; }
    }
    ctx->pc = 0x2E3D3Cu;
label_2e3d3c:
    // 0x2e3d3c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3d40: 0xc44c00b8  lwc1        $f12, 0xB8($v0)
    ctx->pc = 0x2e3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3d44: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3D44u;
    SET_GPR_U32(ctx, 31, 0x2E3D4Cu);
    ctx->pc = 0x2E3D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D44u;
            // 0x2e3d48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D4Cu; }
        if (ctx->pc != 0x2E3D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D4Cu; }
        if (ctx->pc != 0x2E3D4Cu) { return; }
    }
    ctx->pc = 0x2E3D4Cu;
label_2e3d4c:
    // 0x2e3d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3d50:
    // 0x2e3d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3d54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D54u;
            // 0x2e3d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3D5Cu;
}
