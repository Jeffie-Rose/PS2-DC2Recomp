#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COPY_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e3490 - 0x2e34f4
void ps2__COPY_VECTOR__FP12RS_STACKDATAi_0x2e3490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COPY_VECTOR__FP12RS_STACKDATAi_0x2e3490");
#endif

    switch (ctx->pc) {
        case 0x2e34b8u: goto label_2e34b8;
        case 0x2e34c8u: goto label_2e34c8;
        case 0x2e34d8u: goto label_2e34d8;
        case 0x2e34e4u: goto label_2e34e4;
        default: break;
    }

    ctx->pc = 0x2e3490u;

    // 0x2e3490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3494: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e3498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e349c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E349Cu;
    {
        const bool branch_taken_0x2e349c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E34A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E349Cu;
            // 0x2e34a0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e349c) {
            ctx->pc = 0x2E34ACu;
            goto label_2e34ac;
        }
    }
    ctx->pc = 0x2E34A4u;
    // 0x2e34a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E34A4u;
    {
        const bool branch_taken_0x2e34a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E34A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E34A4u;
            // 0x2e34a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34a4) {
            ctx->pc = 0x2E34E8u;
            goto label_2e34e8;
        }
    }
    ctx->pc = 0x2E34ACu;
label_2e34ac:
    // 0x2e34ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e34acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e34b0: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E34B0u;
    SET_GPR_U32(ctx, 31, 0x2E34B8u);
    ctx->pc = 0x2E34B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E34B0u;
            // 0x2e34b4: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34B8u; }
        if (ctx->pc != 0x2E34B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34B8u; }
        if (ctx->pc != 0x2E34B8u) { return; }
    }
    ctx->pc = 0x2E34B8u;
label_2e34b8:
    // 0x2e34b8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2e34b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e34bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e34bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e34c0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E34C0u;
    SET_GPR_U32(ctx, 31, 0x2E34C8u);
    ctx->pc = 0x2E34C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E34C0u;
            // 0x2e34c4: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34C8u; }
        if (ctx->pc != 0x2E34C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34C8u; }
        if (ctx->pc != 0x2E34C8u) { return; }
    }
    ctx->pc = 0x2E34C8u;
label_2e34c8:
    // 0x2e34c8: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x2e34c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e34cc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e34ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e34d0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E34D0u;
    SET_GPR_U32(ctx, 31, 0x2E34D8u);
    ctx->pc = 0x2E34D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E34D0u;
            // 0x2e34d4: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34D8u; }
        if (ctx->pc != 0x2E34D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34D8u; }
        if (ctx->pc != 0x2E34D8u) { return; }
    }
    ctx->pc = 0x2E34D8u;
label_2e34d8:
    // 0x2e34d8: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x2e34d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e34dc: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E34DCu;
    SET_GPR_U32(ctx, 31, 0x2E34E4u);
    ctx->pc = 0x2E34E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E34DCu;
            // 0x2e34e0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34E4u; }
        if (ctx->pc != 0x2E34E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34E4u; }
        if (ctx->pc != 0x2E34E4u) { return; }
    }
    ctx->pc = 0x2E34E4u;
label_2e34e4:
    // 0x2e34e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e34e8:
    // 0x2e34e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e34e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e34ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E34ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E34F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E34ECu;
            // 0x2e34f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E34F4u;
}
