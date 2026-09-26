#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ezMidi__Fii
// Address: 0x18b250 - 0x18b310
void ezMidi__Fii_0x18b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ezMidi__Fii_0x18b250");
#endif

    switch (ctx->pc) {
        case 0x18b264u: goto label_18b264;
        case 0x18b2c4u: goto label_18b2c4;
        case 0x18b2fcu: goto label_18b2fc;
        default: break;
    }

    ctx->pc = 0x18b250u;

    // 0x18b250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b254: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x18b254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b25c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18b25cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b260: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18b260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b264:
    // 0x18b264: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18b268: 0x286207d0  slti        $v0, $v1, 0x7D0
    ctx->pc = 0x18b268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x18b26c: 0x0  nop
    ctx->pc = 0x18b26cu;
    // NOP
    // 0x18b270: 0x0  nop
    ctx->pc = 0x18b270u;
    // NOP
    // 0x18b274: 0x0  nop
    ctx->pc = 0x18b274u;
    // NOP
    // 0x18b278: 0x0  nop
    ctx->pc = 0x18b278u;
    // NOP
    // 0x18b27c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B27Cu;
    {
        const bool branch_taken_0x18b27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b27c) {
            ctx->pc = 0x18B264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b264;
        }
    }
    ctx->pc = 0x18B284u;
    // 0x18b284: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x18b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x18b288: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B288u;
    {
        const bool branch_taken_0x18b288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B288u;
            // 0x18b28c: 0x30821000  andi        $v0, $a0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b288) {
            ctx->pc = 0x18B294u;
            goto label_18b294;
        }
    }
    ctx->pc = 0x18B290u;
    // 0x18b290: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_18b294:
    // 0x18b294: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18B294u;
    {
        const bool branch_taken_0x18b294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B294u;
            // 0x18b298: 0x3c01003d  lui         $at, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b294) {
            ctx->pc = 0x18B2CCu;
            goto label_18b2cc;
        }
    }
    ctx->pc = 0x18B29Cu;
    // 0x18b29c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18b29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2a0: 0x3c09003d  lui         $t1, 0x3D
    ctx->pc = 0x18b2a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)61 << 16));
    // 0x18b2a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18b2a8: 0x25293600  addiu       $t1, $t1, 0x3600
    ctx->pc = 0x18b2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13824));
    // 0x18b2ac: 0x24843640  addiu       $a0, $a0, 0x3640
    ctx->pc = 0x18b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13888));
    // 0x18b2b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2b4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x18b2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18b2b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18b2b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2bc: 0xc044ca0  jal         func_113280
    ctx->pc = 0x18B2BCu;
    SET_GPR_U32(ctx, 31, 0x18B2C4u);
    ctx->pc = 0x18B2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2BCu;
            // 0x18b2c0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113280u;
    if (runtime->hasFunction(0x113280u)) {
        auto targetFn = runtime->lookupFunction(0x113280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2C4u; }
        if (ctx->pc != 0x18B2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x113280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2C4u; }
        if (ctx->pc != 0x18B2C4u) { return; }
    }
    ctx->pc = 0x18B2C4u;
label_18b2c4:
    // 0x18b2c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18B2C4u;
    {
        const bool branch_taken_0x18b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b2c4) {
            ctx->pc = 0x18B2FCu;
            goto label_18b2fc;
        }
    }
    ctx->pc = 0x18B2CCu;
label_18b2cc:
    // 0x18b2cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18b2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2d0: 0xac273600  sw          $a3, 0x3600($at)
    ctx->pc = 0x18b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13824), GPR_U32(ctx, 7));
    // 0x18b2d4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18b2d8: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x18b2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x18b2dc: 0x24843640  addiu       $a0, $a0, 0x3640
    ctx->pc = 0x18b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13888));
    // 0x18b2e0: 0x24e73600  addiu       $a3, $a3, 0x3600
    ctx->pc = 0x18b2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13824));
    // 0x18b2e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2e8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18b2e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2ec: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x18b2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18b2f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18b2f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2f4: 0xc044ca0  jal         func_113280
    ctx->pc = 0x18B2F4u;
    SET_GPR_U32(ctx, 31, 0x18B2FCu);
    ctx->pc = 0x18B2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2F4u;
            // 0x18b2f8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113280u;
    if (runtime->hasFunction(0x113280u)) {
        auto targetFn = runtime->lookupFunction(0x113280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2FCu; }
        if (ctx->pc != 0x18B2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x113280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2FCu; }
        if (ctx->pc != 0x18B2FCu) { return; }
    }
    ctx->pc = 0x18B2FCu;
label_18b2fc:
    // 0x18b2fc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18b2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18b300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b304: 0x8c223600  lw          $v0, 0x3600($at)
    ctx->pc = 0x18b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13824)));
    // 0x18b308: 0x3e00008  jr          $ra
    ctx->pc = 0x18B308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B308u;
            // 0x18b30c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B310u;
}
