#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_POS__FP12RS_STACKDATAi
// Address: 0x274950 - 0x274a80
void ps2__EOH_SET_POS__FP12RS_STACKDATAi_0x274950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_POS__FP12RS_STACKDATAi_0x274950");
#endif

    switch (ctx->pc) {
        case 0x274984u: goto label_274984;
        case 0x2749a8u: goto label_2749a8;
        case 0x274a10u: goto label_274a10;
        case 0x274a20u: goto label_274a20;
        case 0x274a30u: goto label_274a30;
        case 0x274a40u: goto label_274a40;
        case 0x274a6cu: goto label_274a6c;
        default: break;
    }

    ctx->pc = 0x274950u;

    // 0x274950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x274954: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x274954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x274958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27495c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274960: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x274960u;
    {
        const bool branch_taken_0x274960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x274964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274960u;
            // 0x274964: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274960) {
            ctx->pc = 0x274A28u;
            goto label_274a28;
        }
    }
    ctx->pc = 0x274968u;
    // 0x274968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27496c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27496Cu;
    {
        const bool branch_taken_0x27496c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27496c) {
            ctx->pc = 0x27497Cu;
            goto label_27497c;
        }
    }
    ctx->pc = 0x274974u;
    // 0x274974: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x274974u;
    {
        const bool branch_taken_0x274974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274974u;
            // 0x274978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274974) {
            ctx->pc = 0x274A48u;
            goto label_274a48;
        }
    }
    ctx->pc = 0x27497Cu;
label_27497c:
    // 0x27497c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27497Cu;
    SET_GPR_U32(ctx, 31, 0x274984u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274984u; }
        if (ctx->pc != 0x274984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274984u; }
        if (ctx->pc != 0x274984u) { return; }
    }
    ctx->pc = 0x274984u;
label_274984:
    // 0x274984: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x274984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x274988: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x274988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x27498c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27498Cu;
    {
        const bool branch_taken_0x27498c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x274990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27498Cu;
            // 0x274990: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27498c) {
            ctx->pc = 0x27499Cu;
            goto label_27499c;
        }
    }
    ctx->pc = 0x274994u;
    // 0x274994: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x274994u;
    {
        const bool branch_taken_0x274994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274994u;
            // 0x274998: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274994) {
            ctx->pc = 0x2749F8u;
            goto label_2749f8;
        }
    }
    ctx->pc = 0x27499Cu;
label_27499c:
    // 0x27499c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x27499cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x2749a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2749A0u;
    {
        const bool branch_taken_0x2749a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749A0u;
            // 0x2749a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749a0) {
            ctx->pc = 0x2749D0u;
            goto label_2749d0;
        }
    }
    ctx->pc = 0x2749A8u;
label_2749a8:
    // 0x2749a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2749a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2749ac: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2749ACu;
    {
        const bool branch_taken_0x2749ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2749ac) {
            ctx->pc = 0x2749DCu;
            goto label_2749dc;
        }
    }
    ctx->pc = 0x2749B4u;
    // 0x2749b4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x2749b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2749b8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2749B8u;
    {
        const bool branch_taken_0x2749b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749b8) {
            ctx->pc = 0x2749C8u;
            goto label_2749c8;
        }
    }
    ctx->pc = 0x2749C0u;
    // 0x2749c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2749C0u;
    {
        const bool branch_taken_0x2749c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749C0u;
            // 0x2749c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749c0) {
            ctx->pc = 0x2749D0u;
            goto label_2749d0;
        }
    }
    ctx->pc = 0x2749C8u;
label_2749c8:
    // 0x2749c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2749C8u;
    {
        const bool branch_taken_0x2749c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749C8u;
            // 0x2749cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749c8) {
            ctx->pc = 0x2749F8u;
            goto label_2749f8;
        }
    }
    ctx->pc = 0x2749D0u;
label_2749d0:
    // 0x2749d0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2749d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2749d4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2749D4u;
    {
        const bool branch_taken_0x2749d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2749d4) {
            ctx->pc = 0x2749A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2749a8;
        }
    }
    ctx->pc = 0x2749DCu;
label_2749dc:
    // 0x2749dc: 0x0  nop
    ctx->pc = 0x2749dcu;
    // NOP
    // 0x2749e0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2749E0u;
    {
        const bool branch_taken_0x2749e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2749E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749E0u;
            // 0x2749e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749e0) {
            ctx->pc = 0x2749F0u;
            goto label_2749f0;
        }
    }
    ctx->pc = 0x2749E8u;
    // 0x2749e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2749E8u;
    {
        const bool branch_taken_0x2749e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749e8) {
            ctx->pc = 0x2749F8u;
            goto label_2749f8;
        }
    }
    ctx->pc = 0x2749F0u;
label_2749f0:
    // 0x2749f0: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x2749f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2749f4: 0x0  nop
    ctx->pc = 0x2749f4u;
    // NOP
label_2749f8:
    // 0x2749f8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2749F8u;
    {
        const bool branch_taken_0x2749f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2749FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749F8u;
            // 0x2749fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749f8) {
            ctx->pc = 0x274A08u;
            goto label_274a08;
        }
    }
    ctx->pc = 0x274A00u;
    // 0x274a00: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x274A00u;
    {
        const bool branch_taken_0x274a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A00u;
            // 0x274a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a00) {
            ctx->pc = 0x274A6Cu;
            goto label_274a6c;
        }
    }
    ctx->pc = 0x274A08u;
label_274a08:
    // 0x274a08: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x274A08u;
    SET_GPR_U32(ctx, 31, 0x274A10u);
    ctx->pc = 0x274A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274A08u;
            // 0x274a0c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A10u; }
        if (ctx->pc != 0x274A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A10u; }
        if (ctx->pc != 0x274A10u) { return; }
    }
    ctx->pc = 0x274A10u;
label_274a10:
    // 0x274a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a18: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x274A18u;
    SET_GPR_U32(ctx, 31, 0x274A20u);
    ctx->pc = 0x274A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274A18u;
            // 0x274a1c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A20u; }
        if (ctx->pc != 0x274A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A20u; }
        if (ctx->pc != 0x274A20u) { return; }
    }
    ctx->pc = 0x274A20u;
label_274a20:
    // 0x274a20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274A20u;
    {
        const bool branch_taken_0x274a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A20u;
            // 0x274a24: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a20) {
            ctx->pc = 0x274A54u;
            goto label_274a54;
        }
    }
    ctx->pc = 0x274A28u;
label_274a28:
    // 0x274a28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274A28u;
    SET_GPR_U32(ctx, 31, 0x274A30u);
    ctx->pc = 0x274A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274A28u;
            // 0x274a2c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A30u; }
        if (ctx->pc != 0x274A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A30u; }
        if (ctx->pc != 0x274A30u) { return; }
    }
    ctx->pc = 0x274A30u;
label_274a30:
    // 0x274a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a38: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x274A38u;
    SET_GPR_U32(ctx, 31, 0x274A40u);
    ctx->pc = 0x274A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274A38u;
            // 0x274a3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A40u; }
        if (ctx->pc != 0x274A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A40u; }
        if (ctx->pc != 0x274A40u) { return; }
    }
    ctx->pc = 0x274A40u;
label_274a40:
    // 0x274a40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274A40u;
    {
        const bool branch_taken_0x274a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a40) {
            ctx->pc = 0x274A50u;
            goto label_274a50;
        }
    }
    ctx->pc = 0x274A48u;
label_274a48:
    // 0x274a48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x274A48u;
    {
        const bool branch_taken_0x274a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A48u;
            // 0x274a4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a48) {
            ctx->pc = 0x274A70u;
            goto label_274a70;
        }
    }
    ctx->pc = 0x274A50u;
label_274a50:
    // 0x274a50: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x274a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_274a54:
    // 0x274a54: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274a58: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x274a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x274a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a60: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x274a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x274a64: 0xc0976e0  jal         func_25DB80
    ctx->pc = 0x274A64u;
    SET_GPR_U32(ctx, 31, 0x274A6Cu);
    ctx->pc = 0x274A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274A64u;
            // 0x274a68: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DB80u;
    if (runtime->hasFunction(0x25DB80u)) {
        auto targetFn = runtime->lookupFunction(0x25DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A6Cu; }
        if (ctx->pc != 0x274A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__10CEohMotherFifff_0x25db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A6Cu; }
        if (ctx->pc != 0x274A6Cu) { return; }
    }
    ctx->pc = 0x274A6Cu;
label_274a6c:
    // 0x274a6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x274a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_274a70:
    // 0x274a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274a78: 0x3e00008  jr          $ra
    ctx->pc = 0x274A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A78u;
            // 0x274a7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274A80u;
}
