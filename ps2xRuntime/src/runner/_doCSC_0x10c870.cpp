#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _doCSC
// Address: 0x10c870 - 0x10c988
void _doCSC_0x10c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doCSC_0x10c870");
#endif

    switch (ctx->pc) {
        case 0x10c8a0u: goto label_10c8a0;
        case 0x10c8c4u: goto label_10c8c4;
        case 0x10c8fcu: goto label_10c8fc;
        case 0x10c90cu: goto label_10c90c;
        case 0x10c920u: goto label_10c920;
        case 0x10c928u: goto label_10c928;
        case 0x10c950u: goto label_10c950;
        default: break;
    }

    ctx->pc = 0x10c870u;

    // 0x10c870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10c874: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c878: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10c87c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c880: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10c880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10c884: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10c884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c888: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10c88c: 0x129980  sll         $s3, $s2, 6
    ctx->pc = 0x10c88cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x10c890: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10c894: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c898: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10c89c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10c89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10c8a0:
    // 0x10c8a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c8a4: 0x0  nop
    ctx->pc = 0x10c8a4u;
    // NOP
    // 0x10c8a8: 0x0  nop
    ctx->pc = 0x10c8a8u;
    // NOP
    // 0x10c8ac: 0x0  nop
    ctx->pc = 0x10c8acu;
    // NOP
    // 0x10c8b0: 0x0  nop
    ctx->pc = 0x10c8b0u;
    // NOP
    // 0x10c8b4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C8B4u;
    {
        const bool branch_taken_0x10c8b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c8b4) {
            ctx->pc = 0x10C8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c8a0;
        }
    }
    ctx->pc = 0x10C8BCu;
    // 0x10c8bc: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10C8BCu;
    SET_GPR_U32(ctx, 31, 0x10C8C4u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8C4u; }
        if (ctx->pc != 0x10C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8C4u; }
        if (ctx->pc != 0x10C8C4u) { return; }
    }
    ctx->pc = 0x10C8C4u;
label_10c8c4:
    // 0x10c8c4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10c8c8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c8cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10c8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10c8d0: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x10c8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x10c8d4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x10c8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10c8d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c8dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10c8e0: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x10c8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x10c8e4: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x10c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x10c8e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c8ec: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x10c8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x10c8f0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x10c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10c8f4: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10C8F4u;
    SET_GPR_U32(ctx, 31, 0x10C8FCu);
    ctx->pc = 0x10C8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C8F4u;
            // 0x10c8f8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8FCu; }
        if (ctx->pc != 0x10C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8FCu; }
        if (ctx->pc != 0x10C8FCu) { return; }
    }
    ctx->pc = 0x10C8FCu;
label_10c8fc:
    // 0x10c8fc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x10c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x10c900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c904: 0xc042acc  jal         func_10AB30
    ctx->pc = 0x10C904u;
    SET_GPR_U32(ctx, 31, 0x10C90Cu);
    ctx->pc = 0x10C908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C904u;
            // 0x10c908: 0x2452825  or          $a1, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB30u;
    if (runtime->hasFunction(0x10AB30u)) {
        auto targetFn = runtime->lookupFunction(0x10AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C90Cu; }
        if (ctx->pc != 0x10C90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x10ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C90Cu; }
        if (ctx->pc != 0x10C90Cu) { return; }
    }
    ctx->pc = 0x10C90Cu;
label_10c90c:
    // 0x10c90c: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x10c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10c910: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c914: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10c918: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10C918u;
    SET_GPR_U32(ctx, 31, 0x10C920u);
    ctx->pc = 0x10C91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C918u;
            // 0x10c91c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C920u; }
        if (ctx->pc != 0x10C920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C920u; }
        if (ctx->pc != 0x10C920u) { return; }
    }
    ctx->pc = 0x10C920u;
label_10c920:
    // 0x10c920: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c924: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10c924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
label_10c928:
    // 0x10c928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c92c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10c930: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c934: 0x0  nop
    ctx->pc = 0x10c934u;
    // NOP
    // 0x10c938: 0x0  nop
    ctx->pc = 0x10c938u;
    // NOP
    // 0x10c93c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C93Cu;
    {
        const bool branch_taken_0x10c93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c93c) {
            ctx->pc = 0x10C928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c928;
        }
    }
    ctx->pc = 0x10C944u;
    // 0x10c944: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c948: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c94c: 0x0  nop
    ctx->pc = 0x10c94cu;
    // NOP
label_10c950:
    // 0x10c950: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c954: 0x0  nop
    ctx->pc = 0x10c954u;
    // NOP
    // 0x10c958: 0x0  nop
    ctx->pc = 0x10c958u;
    // NOP
    // 0x10c95c: 0x0  nop
    ctx->pc = 0x10c95cu;
    // NOP
    // 0x10c960: 0x0  nop
    ctx->pc = 0x10c960u;
    // NOP
    // 0x10c964: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C964u;
    {
        const bool branch_taken_0x10c964 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c964) {
            ctx->pc = 0x10C950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c950;
        }
    }
    ctx->pc = 0x10C96Cu;
    // 0x10c96c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10c96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c970: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10c970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c974: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10c974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c978: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10c978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c97c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10c97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c980: 0x3e00008  jr          $ra
    ctx->pc = 0x10C980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C980u;
            // 0x10c984: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C988u;
}
