#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _motionComp0
// Address: 0x107c10 - 0x107e60
void _motionComp0_0x107c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionComp0_0x107c10");
#endif

    switch (ctx->pc) {
        case 0x107c90u: goto label_107c90;
        case 0x107ce4u: goto label_107ce4;
        case 0x107cfcu: goto label_107cfc;
        case 0x107d18u: goto label_107d18;
        case 0x107d3cu: goto label_107d3c;
        default: break;
    }

    ctx->pc = 0x107c10u;

    // 0x107c10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x107c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x107c14: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x107c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x107c18: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x107c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x107c1c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x107c1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c20: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x107c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x107c24: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x107c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x107c28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x107c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x107c2c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x107c2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c30: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x107c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x107c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c38: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x107c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x107c3c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x107c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x107c40: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x107c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x107c44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x107c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x107c48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x107c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x107c4c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x107c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x107c50: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x107c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x107c54: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x107c54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x107c58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x107C58u;
    {
        const bool branch_taken_0x107c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107c58) {
            ctx->pc = 0x107C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107C58u;
            // 0x107c5c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x107C60u;
            goto label_107c60;
        }
    }
    ctx->pc = 0x107C60u;
label_107c60:
    // 0x107c60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x107c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c64: 0x1810  mfhi        $v1
    ctx->pc = 0x107c64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x107c68: 0xb812  mflo        $s7
    ctx->pc = 0x107c68u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x107c6c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x107c6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c70: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x107c70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x107c74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x107C74u;
    {
        const bool branch_taken_0x107c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C74u;
            // 0x107c78: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c74) {
            ctx->pc = 0x107CC0u;
            goto label_107cc0;
        }
    }
    ctx->pc = 0x107C7Cu;
    // 0x107c7c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x107c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x107c80: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x107c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x107c84: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x107c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
    // 0x107c88: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x107c88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x107c8c: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x107c8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
label_107c90:
    // 0x107c90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107c94: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x107c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x107c98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107c9c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x107c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x107ca0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x107ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x107ca4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107CA4u;
    {
        const bool branch_taken_0x107ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x107ca4) {
            ctx->pc = 0x107C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107c90;
        }
    }
    ctx->pc = 0x107CACu;
    // 0x107cac: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x107cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107cb0: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x107cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x107cb4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x107cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x107cb8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x107CB8u;
    {
        const bool branch_taken_0x107cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CB8u;
            // 0x107cbc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cb8) {
            ctx->pc = 0x107D54u;
            goto label_107d54;
        }
    }
    ctx->pc = 0x107CC0u;
label_107cc0:
    // 0x107cc0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x107cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x107cc4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x107cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x107cc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x107CC8u;
    {
        const bool branch_taken_0x107cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CC8u;
            // 0x107ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cc8) {
            ctx->pc = 0x107CF4u;
            goto label_107cf4;
        }
    }
    ctx->pc = 0x107CD0u;
    // 0x107cd0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x107cd4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x107cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cd8: 0x24a50568  addiu       $a1, $a1, 0x568
    ctx->pc = 0x107cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1384));
    // 0x107cdc: 0xc043b56  jal         func_10ED58
    ctx->pc = 0x107CDCu;
    SET_GPR_U32(ctx, 31, 0x107CE4u);
    ctx->pc = 0x107CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CDCu;
            // 0x107ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED58u;
    if (runtime->hasFunction(0x10ED58u)) {
        auto targetFn = runtime->lookupFunction(0x10ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CE4u; }
        if (ctx->pc != 0x107CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x10ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CE4u; }
        if (ctx->pc != 0x107CE4u) { return; }
    }
    ctx->pc = 0x107CE4u;
label_107ce4:
    // 0x107ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cec: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x107CECu;
    {
        const bool branch_taken_0x107cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CECu;
            // 0x107cf0: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cec) {
            ctx->pc = 0x107E30u;
            goto label_107e30;
        }
    }
    ctx->pc = 0x107CF4u;
label_107cf4:
    // 0x107cf4: 0xc041f98  jal         func_107E60
    ctx->pc = 0x107CF4u;
    SET_GPR_U32(ctx, 31, 0x107CFCu);
    ctx->pc = 0x107CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CF4u;
            // 0x107cf8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107E60u;
    if (runtime->hasFunction(0x107E60u)) {
        auto targetFn = runtime->lookupFunction(0x107E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CFCu; }
        if (ctx->pc != 0x107CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getAllRefs_0x107e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CFCu; }
        if (ctx->pc != 0x107CFCu) { return; }
    }
    ctx->pc = 0x107CFCu;
label_107cfc:
    // 0x107cfc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x107d00: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x107d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x107d04: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x107d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
    // 0x107d08: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x107d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x107d0c: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x107d0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
    // 0x107d10: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x107d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x107d14: 0x0  nop
    ctx->pc = 0x107d14u;
    // NOP
label_107d18:
    // 0x107d18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x107d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107d1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x107d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x107d20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x107d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x107d24: 0x0  nop
    ctx->pc = 0x107d24u;
    // NOP
    // 0x107d28: 0x0  nop
    ctx->pc = 0x107d28u;
    // NOP
    // 0x107d2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107D2Cu;
    {
        const bool branch_taken_0x107d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107d2c) {
            ctx->pc = 0x107D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107d18;
        }
    }
    ctx->pc = 0x107D34u;
    // 0x107d34: 0xc0431aa  jal         func_10C6A8
    ctx->pc = 0x107D34u;
    SET_GPR_U32(ctx, 31, 0x107D3Cu);
    ctx->pc = 0x107D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107D34u;
            // 0x107d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6A8u;
    if (runtime->hasFunction(0x10C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x10C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D3Cu; }
        if (ctx->pc != 0x107D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dmaRefImage_0x10c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D3Cu; }
        if (ctx->pc != 0x107D3Cu) { return; }
    }
    ctx->pc = 0x107D3Cu;
label_107d3c:
    // 0x107d3c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x107d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x107d40: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x107d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107d44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107d48: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x107d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x107d4c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x107d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x107d50: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x107d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_107d54:
    // 0x107d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107d58: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x107D58u;
    {
        const bool branch_taken_0x107d58 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x107d58) {
            ctx->pc = 0x107D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107D58u;
            // 0x107d5c: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107D84u;
            goto label_107d84;
        }
    }
    ctx->pc = 0x107D60u;
    // 0x107d60: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x107d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x107d64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107D64u;
    {
        const bool branch_taken_0x107d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D64u;
            // 0x107d68: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d64) {
            ctx->pc = 0x107D80u;
            goto label_107d80;
        }
    }
    ctx->pc = 0x107D6Cu;
    // 0x107d6c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x107d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x107d70: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x107d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x107d74: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x107d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x107d78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107D78u;
    {
        const bool branch_taken_0x107d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D78u;
            // 0x107d7c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d78) {
            ctx->pc = 0x107D94u;
            goto label_107d94;
        }
    }
    ctx->pc = 0x107D80u;
label_107d80:
    // 0x107d80: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x107d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_107d84:
    // 0x107d84: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x107d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107d88: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x107d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x107d8c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x107d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x107d90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x107d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_107d94:
    // 0x107d94: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x107d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x107d98: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x107d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107d9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x107d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107da0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x107da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107da4: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x107da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x107da8: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x107da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x107dac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x107dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x107db0: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x107db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x107db4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x107DB4u;
    {
        const bool branch_taken_0x107db4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x107DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107DB4u;
            // 0x107db8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107db4) {
            ctx->pc = 0x107DF0u;
            goto label_107df0;
        }
    }
    ctx->pc = 0x107DBCu;
    // 0x107dbc: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x107dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x107dc0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x107dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x107dc4: 0x8e0501c0  lw          $a1, 0x1C0($s0)
    ctx->pc = 0x107dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x107dc8: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x107dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x107dcc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x107dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x107dd0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x107dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x107dd4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x107dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107dd8: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x107dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x107ddc: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x107ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x107de0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x107de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x107de4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x107de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x107de8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x107DE8u;
    {
        const bool branch_taken_0x107de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107DE8u;
            // 0x107dec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107de8) {
            ctx->pc = 0x107E2Cu;
            goto label_107e2c;
        }
    }
    ctx->pc = 0x107DF0u;
label_107df0:
    // 0x107df0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x107DF0u;
    {
        const bool branch_taken_0x107df0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x107df0) {
            ctx->pc = 0x107DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107DF0u;
            // 0x107df4: 0x8e0201d0  lw          $v0, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107DFCu;
            goto label_107dfc;
        }
    }
    ctx->pc = 0x107DF8u;
    // 0x107df8: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x107df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_107dfc:
    // 0x107dfc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x107dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x107e00: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x107e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x107e04: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x107e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x107e08: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x107e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107e0c: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x107e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x107e10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x107e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107e14: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x107e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x107e18: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x107e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x107e1c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x107e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x107e20: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x107e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x107e24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107e28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x107e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_107e2c:
    // 0x107e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107e30:
    // 0x107e30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x107e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x107e34: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x107e34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107e38: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x107e38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107e3c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x107e3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107e40: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x107e40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107e44: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107e44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107e48: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x107e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107e4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107e50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107e54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107e58: 0x3e00008  jr          $ra
    ctx->pc = 0x107E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E58u;
            // 0x107e5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107E60u;
}
