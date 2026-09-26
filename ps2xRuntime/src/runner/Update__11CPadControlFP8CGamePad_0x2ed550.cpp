#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Update__11CPadControlFP8CGamePad
// Address: 0x2ed550 - 0x2ed6f0
void Update__11CPadControlFP8CGamePad_0x2ed550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Update__11CPadControlFP8CGamePad_0x2ed550");
#endif

    switch (ctx->pc) {
        case 0x2ed57cu: goto label_2ed57c;
        case 0x2ed588u: goto label_2ed588;
        case 0x2ed594u: goto label_2ed594;
        case 0x2ed5a0u: goto label_2ed5a0;
        case 0x2ed5acu: goto label_2ed5ac;
        case 0x2ed5f8u: goto label_2ed5f8;
        case 0x2ed608u: goto label_2ed608;
        case 0x2ed618u: goto label_2ed618;
        case 0x2ed648u: goto label_2ed648;
        default: break;
    }

    ctx->pc = 0x2ed550u;

    // 0x2ed550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ed550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ed554: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ed554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ed558: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ed558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ed55c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ed55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ed560: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ed560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed564: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ed564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ed568: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ed568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ed56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ed570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ed570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed574: 0xc052ca0  jal         func_14B280
    ctx->pc = 0x2ED574u;
    SET_GPR_U32(ctx, 31, 0x2ED57Cu);
    ctx->pc = 0x2ED578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED574u;
            // 0x2ed578: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (runtime->hasFunction(0x14B280u)) {
        auto targetFn = runtime->lookupFunction(0x14B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED57Cu; }
        if (ctx->pc != 0x2ED57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf__8CGamePadFv_0x14b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED57Cu; }
        if (ctx->pc != 0x2ED57Cu) { return; }
    }
    ctx->pc = 0x2ED57Cu;
label_2ed57c:
    // 0x2ed57c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2ed57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2ed580: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x2ED580u;
    SET_GPR_U32(ctx, 31, 0x2ED588u);
    ctx->pc = 0x2ED584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED580u;
            // 0x2ed584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED588u; }
        if (ctx->pc != 0x2ED588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED588u; }
        if (ctx->pc != 0x2ED588u) { return; }
    }
    ctx->pc = 0x2ED588u;
label_2ed588:
    // 0x2ed588: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x2ed588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2ed58c: 0xc052cc0  jal         func_14B300
    ctx->pc = 0x2ED58Cu;
    SET_GPR_U32(ctx, 31, 0x2ED594u);
    ctx->pc = 0x2ED590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED58Cu;
            // 0x2ed590: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED594u; }
        if (ctx->pc != 0x2ED594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED594u; }
        if (ctx->pc != 0x2ED594u) { return; }
    }
    ctx->pc = 0x2ED594u;
label_2ed594:
    // 0x2ed594: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2ed594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2ed598: 0xc052cd0  jal         func_14B340
    ctx->pc = 0x2ED598u;
    SET_GPR_U32(ctx, 31, 0x2ED5A0u);
    ctx->pc = 0x2ED59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED598u;
            // 0x2ed59c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5A0u; }
        if (ctx->pc != 0x2ED5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5A0u; }
        if (ctx->pc != 0x2ED5A0u) { return; }
    }
    ctx->pc = 0x2ED5A0u;
label_2ed5a0:
    // 0x2ed5a0: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x2ed5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2ed5a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ed5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ed5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed5ac:
    // 0x2ed5ac: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2ed5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2ed5b0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2ed5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2ed5b4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2ED5B4u;
    {
        const bool branch_taken_0x2ed5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5B4u;
            // 0x2ed5b8: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5b4) {
            ctx->pc = 0x2ED61Cu;
            goto label_2ed61c;
        }
    }
    ctx->pc = 0x2ED5BCu;
    // 0x2ed5bc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2ed5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ed5c0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2ed5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2ed5c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2ed5c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ed5c8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2ed5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2ed5cc: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED5CCu;
    {
        const bool branch_taken_0x2ed5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5CCu;
            // 0x2ed5d0: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5cc) {
            ctx->pc = 0x2ED610u;
            goto label_2ed610;
        }
    }
    ctx->pc = 0x2ED5D4u;
    // 0x2ed5d4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED5D4u;
    {
        const bool branch_taken_0x2ed5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed5d4) {
            ctx->pc = 0x2ED600u;
            goto label_2ed600;
        }
    }
    ctx->pc = 0x2ED5DCu;
    // 0x2ed5dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED5DCu;
    {
        const bool branch_taken_0x2ed5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5dc) {
            ctx->pc = 0x2ED5ECu;
            goto label_2ed5ec;
        }
    }
    ctx->pc = 0x2ED5E4u;
    // 0x2ed5e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2ED5E4u;
    {
        const bool branch_taken_0x2ed5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5e4) {
            ctx->pc = 0x2ED61Cu;
            goto label_2ed61c;
        }
    }
    ctx->pc = 0x2ED5ECu;
label_2ed5ec:
    // 0x2ed5ec: 0x0  nop
    ctx->pc = 0x2ed5ecu;
    // NOP
    // 0x2ed5f0: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x2ED5F0u;
    SET_GPR_U32(ctx, 31, 0x2ED5F8u);
    ctx->pc = 0x2ED5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5F0u;
            // 0x2ed5f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5F8u; }
        if (ctx->pc != 0x2ED5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5F8u; }
        if (ctx->pc != 0x2ED5F8u) { return; }
    }
    ctx->pc = 0x2ED5F8u;
label_2ed5f8:
    // 0x2ed5f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED5F8u;
    {
        const bool branch_taken_0x2ed5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5F8u;
            // 0x2ed5fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5f8) {
            ctx->pc = 0x2ED61Cu;
            goto label_2ed61c;
        }
    }
    ctx->pc = 0x2ED600u;
label_2ed600:
    // 0x2ed600: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2ED600u;
    SET_GPR_U32(ctx, 31, 0x2ED608u);
    ctx->pc = 0x2ED604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED600u;
            // 0x2ed604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED608u; }
        if (ctx->pc != 0x2ED608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED608u; }
        if (ctx->pc != 0x2ED608u) { return; }
    }
    ctx->pc = 0x2ED608u;
label_2ed608:
    // 0x2ed608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED608u;
    {
        const bool branch_taken_0x2ed608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED608u;
            // 0x2ed60c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed608) {
            ctx->pc = 0x2ED61Cu;
            goto label_2ed61c;
        }
    }
    ctx->pc = 0x2ED610u;
label_2ed610:
    // 0x2ed610: 0xc052d30  jal         func_14B4C0
    ctx->pc = 0x2ED610u;
    SET_GPR_U32(ctx, 31, 0x2ED618u);
    ctx->pc = 0x2ED614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED610u;
            // 0x2ed614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B4C0u;
    if (runtime->hasFunction(0x14B4C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED618u; }
        if (ctx->pc != 0x2ED618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Up__8CGamePadFi_0x14b4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED618u; }
        if (ctx->pc != 0x2ED618u) { return; }
    }
    ctx->pc = 0x2ED618u;
label_2ed618:
    // 0x2ed618: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ed618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ed61c:
    // 0x2ed61c: 0x0  nop
    ctx->pc = 0x2ed61cu;
    // NOP
    // 0x2ed620: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ed620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ed624: 0x2a030080  slti        $v1, $s0, 0x80
    ctx->pc = 0x2ed624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ed628: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2ED628u;
    {
        const bool branch_taken_0x2ed628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED628u;
            // 0x2ed62c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed628) {
            ctx->pc = 0x2ED5ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed5ac;
        }
    }
    ctx->pc = 0x2ED630u;
    // 0x2ed630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ed630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed634: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ed634u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed638: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ed638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed63c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ed63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed640: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ed640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed644: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ed644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ed648:
    // 0x2ed648: 0x28a1821  addu        $v1, $s4, $t2
    ctx->pc = 0x2ed648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x2ed64c: 0x24690410  addiu       $t1, $v1, 0x410
    ctx->pc = 0x2ed64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1040));
    // 0x2ed650: 0x8c630414  lw          $v1, 0x414($v1)
    ctx->pc = 0x2ed650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1044)));
    // 0x2ed654: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ED654u;
    {
        const bool branch_taken_0x2ed654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed654) {
            ctx->pc = 0x2ED6C0u;
            goto label_2ed6c0;
        }
    }
    ctx->pc = 0x2ED65Cu;
    // 0x2ed65c: 0x10670015  beq         $v1, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2ED65Cu;
    {
        const bool branch_taken_0x2ed65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ed65c) {
            ctx->pc = 0x2ED6B4u;
            goto label_2ed6b4;
        }
    }
    ctx->pc = 0x2ED664u;
    // 0x2ed664: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED664u;
    {
        const bool branch_taken_0x2ed664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ed664) {
            ctx->pc = 0x2ED6A4u;
            goto label_2ed6a4;
        }
    }
    ctx->pc = 0x2ED66Cu;
    // 0x2ed66c: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED66Cu;
    {
        const bool branch_taken_0x2ed66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ed66c) {
            ctx->pc = 0x2ED694u;
            goto label_2ed694;
        }
    }
    ctx->pc = 0x2ED674u;
    // 0x2ed674: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED674u;
    {
        const bool branch_taken_0x2ed674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ed674) {
            ctx->pc = 0x2ED684u;
            goto label_2ed684;
        }
    }
    ctx->pc = 0x2ED67Cu;
    // 0x2ed67c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED67Cu;
    {
        const bool branch_taken_0x2ed67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed67c) {
            ctx->pc = 0x2ED6C0u;
            goto label_2ed6c0;
        }
    }
    ctx->pc = 0x2ED684u;
label_2ed684:
    // 0x2ed684: 0x0  nop
    ctx->pc = 0x2ed684u;
    // NOP
    // 0x2ed688: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x2ed688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed68c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ED68Cu;
    {
        const bool branch_taken_0x2ed68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED68Cu;
            // 0x2ed690: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed68c) {
            ctx->pc = 0x2ED6C0u;
            goto label_2ed6c0;
        }
    }
    ctx->pc = 0x2ED694u;
label_2ed694:
    // 0x2ed694: 0x0  nop
    ctx->pc = 0x2ed694u;
    // NOP
    // 0x2ed698: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2ed698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed69c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED69Cu;
    {
        const bool branch_taken_0x2ed69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED69Cu;
            // 0x2ed6a0: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed69c) {
            ctx->pc = 0x2ED6C0u;
            goto label_2ed6c0;
        }
    }
    ctx->pc = 0x2ED6A4u;
label_2ed6a4:
    // 0x2ed6a4: 0x0  nop
    ctx->pc = 0x2ed6a4u;
    // NOP
    // 0x2ed6a8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2ed6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed6ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED6ACu;
    {
        const bool branch_taken_0x2ed6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED6ACu;
            // 0x2ed6b0: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6ac) {
            ctx->pc = 0x2ED6C0u;
            goto label_2ed6c0;
        }
    }
    ctx->pc = 0x2ED6B4u;
label_2ed6b4:
    // 0x2ed6b4: 0x0  nop
    ctx->pc = 0x2ed6b4u;
    // NOP
    // 0x2ed6b8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2ed6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed6bc: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2ed6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2ed6c0:
    // 0x2ed6c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ed6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ed6c4: 0x29030020  slti        $v1, $t0, 0x20
    ctx->pc = 0x2ed6c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2ed6c8: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2ED6C8u;
    {
        const bool branch_taken_0x2ed6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED6C8u;
            // 0x2ed6cc: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6c8) {
            ctx->pc = 0x2ED648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed648;
        }
    }
    ctx->pc = 0x2ED6D0u;
    // 0x2ed6d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed6d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ed6d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ed6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ed6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED6E8u;
            // 0x2ed6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED6F0u;
}
