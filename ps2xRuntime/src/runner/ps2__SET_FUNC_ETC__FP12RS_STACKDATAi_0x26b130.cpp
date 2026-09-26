#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FUNC_ETC__FP12RS_STACKDATAi
// Address: 0x26b130 - 0x26b1d0
void ps2__SET_FUNC_ETC__FP12RS_STACKDATAi_0x26b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FUNC_ETC__FP12RS_STACKDATAi_0x26b130");
#endif

    switch (ctx->pc) {
        case 0x26b16cu: goto label_26b16c;
        default: break;
    }

    ctx->pc = 0x26b130u;

    // 0x26b130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b13c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x26b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26b140: 0x24502e90  addiu       $s0, $v0, 0x2E90
    ctx->pc = 0x26b140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
    // 0x26b144: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B144u;
    {
        const bool branch_taken_0x26b144 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B144u;
            // 0x26b148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b144) {
            ctx->pc = 0x26B154u;
            goto label_26b154;
        }
    }
    ctx->pc = 0x26B14Cu;
    // 0x26b14c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26B14Cu;
    {
        const bool branch_taken_0x26b14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B14Cu;
            // 0x26b150: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b14c) {
            ctx->pc = 0x26B1C4u;
            goto label_26b1c4;
        }
    }
    ctx->pc = 0x26B154u;
label_26b154:
    // 0x26b154: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B154u;
    {
        const bool branch_taken_0x26b154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B154u;
            // 0x26b158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b154) {
            ctx->pc = 0x26B164u;
            goto label_26b164;
        }
    }
    ctx->pc = 0x26B15Cu;
    // 0x26b15c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26B15Cu;
    {
        const bool branch_taken_0x26b15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b15c) {
            ctx->pc = 0x26B1C0u;
            goto label_26b1c0;
        }
    }
    ctx->pc = 0x26B164u;
label_26b164:
    // 0x26b164: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26B164u;
    SET_GPR_U32(ctx, 31, 0x26B16Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B16Cu; }
        if (ctx->pc != 0x26B16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B16Cu; }
        if (ctx->pc != 0x26B16Cu) { return; }
    }
    ctx->pc = 0x26B16Cu;
label_26b16c:
    // 0x26b16c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b170: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26B170u;
    {
        const bool branch_taken_0x26b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b170) {
            ctx->pc = 0x26B1A4u;
            goto label_26b1a4;
        }
    }
    ctx->pc = 0x26B178u;
    // 0x26b178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B178u;
    {
        const bool branch_taken_0x26b178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b178) {
            ctx->pc = 0x26B188u;
            goto label_26b188;
        }
    }
    ctx->pc = 0x26B180u;
    // 0x26b180: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26B180u;
    {
        const bool branch_taken_0x26b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B180u;
            // 0x26b184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b180) {
            ctx->pc = 0x26B1B4u;
            goto label_26b1b4;
        }
    }
    ctx->pc = 0x26B188u;
label_26b188:
    // 0x26b188: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26b188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26b18c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x26b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26b190: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26b190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26b194: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x26b194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x26b198: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x26b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x26b19c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26B19Cu;
    {
        const bool branch_taken_0x26b19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B19Cu;
            // 0x26b1a0: 0xac22e4fc  sw          $v0, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b19c) {
            ctx->pc = 0x26B1BCu;
            goto label_26b1bc;
        }
    }
    ctx->pc = 0x26B1A4u;
label_26b1a4:
    // 0x26b1a4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x26b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26b1a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26b1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26b1ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26B1ACu;
    {
        const bool branch_taken_0x26b1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1ACu;
            // 0x26b1b0: 0xac22e4fc  sw          $v0, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1ac) {
            ctx->pc = 0x26B1BCu;
            goto label_26b1bc;
        }
    }
    ctx->pc = 0x26B1B4u;
label_26b1b4:
    // 0x26b1b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26B1B4u;
    {
        const bool branch_taken_0x26b1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b1b4) {
            ctx->pc = 0x26B1C0u;
            goto label_26b1c0;
        }
    }
    ctx->pc = 0x26B1BCu;
label_26b1bc:
    // 0x26b1bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b1c0:
    // 0x26b1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26b1c4:
    // 0x26b1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x26B1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1C8u;
            // 0x26b1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B1D0u;
}
