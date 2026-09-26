#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgItemNo__7CDC2MesFPPci
// Address: 0x21dc80 - 0x21dddc
void SetMsgItemNo__7CDC2MesFPPci_0x21dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgItemNo__7CDC2MesFPPci_0x21dc80");
#endif

    switch (ctx->pc) {
        case 0x21dcc4u: goto label_21dcc4;
        case 0x21dcf4u: goto label_21dcf4;
        case 0x21dd10u: goto label_21dd10;
        case 0x21dd20u: goto label_21dd20;
        case 0x21dd44u: goto label_21dd44;
        case 0x21dd5cu: goto label_21dd5c;
        case 0x21dd70u: goto label_21dd70;
        default: break;
    }

    ctx->pc = 0x21dc80u;

    // 0x21dc80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21dc84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x21dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21dc88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21dc8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21dc90: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x21dc90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21dc98: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x21dc98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21dca0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21dca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dca4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21dca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21dcac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21dcb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21dcb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21dcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21dcb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21dcb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcbc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x21DCBCu;
    {
        const bool branch_taken_0x21dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DCBCu;
            // 0x21dcc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcbc) {
            ctx->pc = 0x21DD94u;
            goto label_21dd94;
        }
    }
    ctx->pc = 0x21DCC4u;
label_21dcc4:
    // 0x21dcc4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x21dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x21dcc8: 0x24731801  addiu       $s3, $v1, 0x1801
    ctx->pc = 0x21dcc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 6145));
    // 0x21dccc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x21dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x21dcd0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x21dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x21dcd4: 0x2d2a021  addu        $s4, $s6, $s2
    ctx->pc = 0x21dcd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x21dcd8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x21dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21dcdc: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x21DCDCu;
    {
        const bool branch_taken_0x21dcdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21dcdc) {
            ctx->pc = 0x21DD18u;
            goto label_21dd18;
        }
    }
    ctx->pc = 0x21DCE4u;
    // 0x21dce4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21dce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21dce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcec: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x21DCECu;
    SET_GPR_U32(ctx, 31, 0x21DCF4u);
    ctx->pc = 0x21DCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DCECu;
            // 0x21dcf0: 0x24a5a540  addiu       $a1, $a1, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DCF4u; }
        if (ctx->pc != 0x21DCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DCF4u; }
        if (ctx->pc != 0x21DCF4u) { return; }
    }
    ctx->pc = 0x21DCF4u;
label_21dcf4:
    // 0x21dcf4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DCF4u;
    {
        const bool branch_taken_0x21dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DCF4u;
            // 0x21dcf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcf4) {
            ctx->pc = 0x21DD00u;
            goto label_21dd00;
        }
    }
    ctx->pc = 0x21DCFCu;
    // 0x21dcfc: 0xa2a221e0  sb          $v0, 0x21E0($s5)
    ctx->pc = 0x21dcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8672), (uint8_t)GPR_U32(ctx, 2));
label_21dd00:
    // 0x21dd00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21dd04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21dd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd08: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21DD08u;
    SET_GPR_U32(ctx, 31, 0x21DD10u);
    ctx->pc = 0x21DD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD08u;
            // 0x21dd0c: 0x24a5a540  addiu       $a1, $a1, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD10u; }
        if (ctx->pc != 0x21DD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD10u; }
        if (ctx->pc != 0x21DD10u) { return; }
    }
    ctx->pc = 0x21DD10u;
label_21dd10:
    // 0x21dd10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21DD10u;
    {
        const bool branch_taken_0x21dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dd10) {
            ctx->pc = 0x21DD44u;
            goto label_21dd44;
        }
    }
    ctx->pc = 0x21DD18u;
label_21dd18:
    // 0x21dd18: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x21DD18u;
    SET_GPR_U32(ctx, 31, 0x21DD20u);
    ctx->pc = 0x21DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD18u;
            // 0x21dd1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD20u; }
        if (ctx->pc != 0x21DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD20u; }
        if (ctx->pc != 0x21DD20u) { return; }
    }
    ctx->pc = 0x21DD20u;
label_21dd20:
    // 0x21dd20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DD20u;
    {
        const bool branch_taken_0x21dd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD20u;
            // 0x21dd24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd20) {
            ctx->pc = 0x21DD2Cu;
            goto label_21dd2c;
        }
    }
    ctx->pc = 0x21DD28u;
    // 0x21dd28: 0xa2a321e0  sb          $v1, 0x21E0($s5)
    ctx->pc = 0x21dd28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8672), (uint8_t)GPR_U32(ctx, 3));
label_21dd2c:
    // 0x21dd2c: 0x0  nop
    ctx->pc = 0x21dd2cu;
    // NOP
    // 0x21dd30: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x21dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21dd34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DD34u;
    {
        const bool branch_taken_0x21dd34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD34u;
            // 0x21dd38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd34) {
            ctx->pc = 0x21DD44u;
            goto label_21dd44;
        }
    }
    ctx->pc = 0x21DD3Cu;
    // 0x21dd3c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21DD3Cu;
    SET_GPR_U32(ctx, 31, 0x21DD44u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD44u; }
        if (ctx->pc != 0x21DD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD44u; }
        if (ctx->pc != 0x21DD44u) { return; }
    }
    ctx->pc = 0x21DD44u;
label_21dd44:
    // 0x21dd44: 0x0  nop
    ctx->pc = 0x21dd44u;
    // NOP
    // 0x21dd48: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x21dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21dd4c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x21DD4Cu;
    {
        const bool branch_taken_0x21dd4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD4Cu;
            // 0x21dd50: 0x2a010010  slti        $at, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd4c) {
            ctx->pc = 0x21DD88u;
            goto label_21dd88;
        }
    }
    ctx->pc = 0x21DD54u;
    // 0x21dd54: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x21DD54u;
    {
        const bool branch_taken_0x21dd54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD54u;
            // 0x21dd58: 0x108940  sll         $s1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd54) {
            ctx->pc = 0x21DDACu;
            goto label_21ddac;
        }
    }
    ctx->pc = 0x21DD5Cu;
label_21dd5c:
    // 0x21dd5c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x21dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x21dd60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21dd64: 0x24a5a540  addiu       $a1, $a1, -0x5AC0
    ctx->pc = 0x21dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
    // 0x21dd68: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21DD68u;
    SET_GPR_U32(ctx, 31, 0x21DD70u);
    ctx->pc = 0x21DD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD68u;
            // 0x21dd6c: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD70u; }
        if (ctx->pc != 0x21DD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD70u; }
        if (ctx->pc != 0x21DD70u) { return; }
    }
    ctx->pc = 0x21DD70u;
label_21dd70:
    // 0x21dd70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21dd70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21dd74: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x21dd74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21dd78: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21DD78u;
    {
        const bool branch_taken_0x21dd78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD78u;
            // 0x21dd7c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd78) {
            ctx->pc = 0x21DD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21dd5c;
        }
    }
    ctx->pc = 0x21DD80u;
    // 0x21dd80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21DD80u;
    {
        const bool branch_taken_0x21dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dd80) {
            ctx->pc = 0x21DDACu;
            goto label_21ddac;
        }
    }
    ctx->pc = 0x21DD88u;
label_21dd88:
    // 0x21dd88: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x21dd88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x21dd8c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x21dd8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x21dd90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21dd90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21dd94:
    // 0x21dd94: 0x0  nop
    ctx->pc = 0x21dd94u;
    // NOP
    // 0x21dd98: 0x217082a  slt         $at, $s0, $s7
    ctx->pc = 0x21dd98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x21dd9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DD9Cu;
    {
        const bool branch_taken_0x21dd9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD9Cu;
            // 0x21dda0: 0x2a030010  slti        $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd9c) {
            ctx->pc = 0x21DDACu;
            goto label_21ddac;
        }
    }
    ctx->pc = 0x21DDA4u;
    // 0x21dda4: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x21DDA4u;
    {
        const bool branch_taken_0x21dda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DDA4u;
            // 0x21dda8: 0x2b11821  addu        $v1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dda4) {
            ctx->pc = 0x21DCC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21dcc4;
        }
    }
    ctx->pc = 0x21DDACu;
label_21ddac:
    // 0x21ddac: 0x0  nop
    ctx->pc = 0x21ddacu;
    // NOP
    // 0x21ddb0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21ddb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ddb4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21ddb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ddb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21ddb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ddbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21ddbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ddc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21ddc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ddc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21ddc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ddc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ddc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ddcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ddccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ddd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ddd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ddd4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DDD4u;
            // 0x21ddd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DDDCu;
}
