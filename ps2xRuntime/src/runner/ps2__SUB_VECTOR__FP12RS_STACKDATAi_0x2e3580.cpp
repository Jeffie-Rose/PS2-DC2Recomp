#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SUB_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e3580 - 0x2e3600
void ps2__SUB_VECTOR__FP12RS_STACKDATAi_0x2e3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SUB_VECTOR__FP12RS_STACKDATAi_0x2e3580");
#endif

    switch (ctx->pc) {
        case 0x2e35a8u: goto label_2e35a8;
        case 0x2e35c0u: goto label_2e35c0;
        case 0x2e35d8u: goto label_2e35d8;
        case 0x2e35f0u: goto label_2e35f0;
        default: break;
    }

    ctx->pc = 0x2e3580u;

    // 0x2e3580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3584: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e3584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e3588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e358c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E358Cu;
    {
        const bool branch_taken_0x2e358c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E358Cu;
            // 0x2e3590: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e358c) {
            ctx->pc = 0x2E359Cu;
            goto label_2e359c;
        }
    }
    ctx->pc = 0x2E3594u;
    // 0x2e3594: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3594u;
    {
        const bool branch_taken_0x2e3594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3594u;
            // 0x2e3598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3594) {
            ctx->pc = 0x2E35F4u;
            goto label_2e35f4;
        }
    }
    ctx->pc = 0x2E359Cu;
label_2e359c:
    // 0x2e359c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e359cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e35a0: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E35A0u;
    SET_GPR_U32(ctx, 31, 0x2E35A8u);
    ctx->pc = 0x2E35A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35A0u;
            // 0x2e35a4: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35A8u; }
        if (ctx->pc != 0x2E35A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35A8u; }
        if (ctx->pc != 0x2E35A8u) { return; }
    }
    ctx->pc = 0x2E35A8u;
label_2e35a8:
    // 0x2e35a8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e35ac: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e35acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e35b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e35b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e35b8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E35B8u;
    SET_GPR_U32(ctx, 31, 0x2E35C0u);
    ctx->pc = 0x2E35BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35B8u;
            // 0x2e35bc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35C0u; }
        if (ctx->pc != 0x2E35C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35C0u; }
        if (ctx->pc != 0x2E35C0u) { return; }
    }
    ctx->pc = 0x2E35C0u;
label_2e35c0:
    // 0x2e35c0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2e35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2e35c4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2e35c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e35c8: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x2e35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2e35cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e35ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e35d0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E35D0u;
    SET_GPR_U32(ctx, 31, 0x2E35D8u);
    ctx->pc = 0x2E35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35D0u;
            // 0x2e35d4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35D8u; }
        if (ctx->pc != 0x2E35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35D8u; }
        if (ctx->pc != 0x2E35D8u) { return; }
    }
    ctx->pc = 0x2E35D8u;
label_2e35d8:
    // 0x2e35d8: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2e35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2e35dc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e35dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e35e0: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x2e35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2e35e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e35e8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E35E8u;
    SET_GPR_U32(ctx, 31, 0x2E35F0u);
    ctx->pc = 0x2E35ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35E8u;
            // 0x2e35ec: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35F0u; }
        if (ctx->pc != 0x2E35F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35F0u; }
        if (ctx->pc != 0x2E35F0u) { return; }
    }
    ctx->pc = 0x2E35F0u;
label_2e35f0:
    // 0x2e35f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e35f4:
    // 0x2e35f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e35f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e35f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E35F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E35FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35F8u;
            // 0x2e35fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3600u;
}
