#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _mbAddressIncrement
// Address: 0x109d18 - 0x109e28
void _mbAddressIncrement_0x109d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_mbAddressIncrement_0x109d18");
#endif

    switch (ctx->pc) {
        case 0x109d60u: goto label_109d60;
        case 0x109d68u: goto label_109d68;
        case 0x109da8u: goto label_109da8;
        case 0x109dccu: goto label_109dcc;
        case 0x109de0u: goto label_109de0;
        default: break;
    }

    ctx->pc = 0x109d18u;

    // 0x109d18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x109d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x109d1c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x109d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x109d20: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x109d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x109d24: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x109d24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109d28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x109d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x109d2c: 0x24160022  addiu       $s6, $zero, 0x22
    ctx->pc = 0x109d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x109d30: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x109d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x109d34: 0x24150023  addiu       $s5, $zero, 0x23
    ctx->pc = 0x109d34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x109d38: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x109d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109d3c: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x109d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x109d40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109d44: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x109d44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x109d48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109d4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x109d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d50: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x109d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x109d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109d60:
    // 0x109d60: 0xc042b2e  jal         func_10ACB8
    ctx->pc = 0x109D60u;
    SET_GPR_U32(ctx, 31, 0x109D68u);
    ctx->pc = 0x109D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109D60u;
            // 0x109d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ACB8u;
    if (runtime->hasFunction(0x10ACB8u)) {
        auto targetFn = runtime->lookupFunction(0x10ACB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109D68u; }
        if (ctx->pc != 0x109D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x10acb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109D68u; }
        if (ctx->pc != 0x109D68u) { return; }
    }
    ctx->pc = 0x109D68u;
label_109d68:
    // 0x109d68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d6c: 0x12160017  beq         $s0, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x109D6Cu;
    {
        const bool branch_taken_0x109d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x109D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109D6Cu;
            // 0x109d70: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d6c) {
            ctx->pc = 0x109DCCu;
            goto label_109dcc;
        }
    }
    ctx->pc = 0x109D74u;
    // 0x109d74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109D74u;
    {
        const bool branch_taken_0x109d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d74) {
            ctx->pc = 0x109D8Cu;
            goto label_109d8c;
        }
    }
    ctx->pc = 0x109D7Cu;
    // 0x109d7c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109D7Cu;
    {
        const bool branch_taken_0x109d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109D7Cu;
            // 0x109d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d7c) {
            ctx->pc = 0x109DA0u;
            goto label_109da0;
        }
    }
    ctx->pc = 0x109D84u;
    // 0x109d84: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x109D84u;
    {
        const bool branch_taken_0x109d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109D84u;
            // 0x109d88: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d84) {
            ctx->pc = 0x109DECu;
            goto label_109dec;
        }
    }
    ctx->pc = 0x109D8Cu;
label_109d8c:
    // 0x109d8c: 0x56150017  bnel        $s0, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x109D8Cu;
    {
        const bool branch_taken_0x109d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x109d8c) {
            ctx->pc = 0x109D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109D8Cu;
            // 0x109d90: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109DECu;
            goto label_109dec;
        }
    }
    ctx->pc = 0x109D94u;
    // 0x109d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109d98: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x109D98u;
    {
        const bool branch_taken_0x109d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109D98u;
            // 0x109d9c: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d98) {
            ctx->pc = 0x109DF0u;
            goto label_109df0;
        }
    }
    ctx->pc = 0x109DA0u;
label_109da0:
    // 0x109da0: 0xc042b8c  jal         func_10AE30
    ctx->pc = 0x109DA0u;
    SET_GPR_U32(ctx, 31, 0x109DA8u);
    ctx->pc = 0x109DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109DA0u;
            // 0x109da4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AE30u;
    if (runtime->hasFunction(0x10AE30u)) {
        auto targetFn = runtime->lookupFunction(0x10AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109DA8u; }
        if (ctx->pc != 0x109DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x10ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109DA8u; }
        if (ctx->pc != 0x109DA8u) { return; }
    }
    ctx->pc = 0x109DA8u;
label_109da8:
    // 0x109da8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109dac: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x109dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x109db0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109DB0u;
    {
        const bool branch_taken_0x109db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109DB0u;
            // 0x109db4: 0x26850628  addiu       $a1, $s4, 0x628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109db0) {
            ctx->pc = 0x109DD4u;
            goto label_109dd4;
        }
    }
    ctx->pc = 0x109DB8u;
    // 0x109db8: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x109DB8u;
    {
        const bool branch_taken_0x109db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x109DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109DB8u;
            // 0x109dbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109db8) {
            ctx->pc = 0x109DD8u;
            goto label_109dd8;
        }
    }
    ctx->pc = 0x109DC0u;
    // 0x109dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109dc4: 0xc042bce  jal         func_10AF38
    ctx->pc = 0x109DC4u;
    SET_GPR_U32(ctx, 31, 0x109DCCu);
    ctx->pc = 0x109DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109DC4u;
            // 0x109dc8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109DCCu; }
        if (ctx->pc != 0x109DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109DCCu; }
        if (ctx->pc != 0x109DCCu) { return; }
    }
    ctx->pc = 0x109DCCu;
label_109dcc:
    // 0x109dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x109DCCu;
    {
        const bool branch_taken_0x109dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109DCCu;
            // 0x109dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dcc) {
            ctx->pc = 0x109DF0u;
            goto label_109df0;
        }
    }
    ctx->pc = 0x109DD4u;
label_109dd4:
    // 0x109dd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109dd8:
    // 0x109dd8: 0xc043b56  jal         func_10ED58
    ctx->pc = 0x109DD8u;
    SET_GPR_U32(ctx, 31, 0x109DE0u);
    ctx->pc = 0x109DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109DD8u;
            // 0x109ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED58u;
    if (runtime->hasFunction(0x10ED58u)) {
        auto targetFn = runtime->lookupFunction(0x10ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109DE0u; }
        if (ctx->pc != 0x109DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x10ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109DE0u; }
        if (ctx->pc != 0x109DE0u) { return; }
    }
    ctx->pc = 0x109DE0u;
label_109de0:
    // 0x109de0: 0xae37011c  sw          $s7, 0x11C($s1)
    ctx->pc = 0x109de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 23));
    // 0x109de4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x109DE4u;
    {
        const bool branch_taken_0x109de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109DE4u;
            // 0x109de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109de4) {
            ctx->pc = 0x109DFCu;
            goto label_109dfc;
        }
    }
    ctx->pc = 0x109DECu;
label_109dec:
    // 0x109dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109df0:
    // 0x109df0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x109DF0u;
    {
        const bool branch_taken_0x109df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109DF0u;
            // 0x109df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109df0) {
            ctx->pc = 0x109D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109d60;
        }
    }
    ctx->pc = 0x109DF8u;
    // 0x109df8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x109df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_109dfc:
    // 0x109dfc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x109dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109e00: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x109e00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109e04: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x109e04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109e08: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x109e08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109e0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x109e0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109e10: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109e10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109e14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109e18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109e20: 0x3e00008  jr          $ra
    ctx->pc = 0x109E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109E20u;
            // 0x109e24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109E28u;
}
