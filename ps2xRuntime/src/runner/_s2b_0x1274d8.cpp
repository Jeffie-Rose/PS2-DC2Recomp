#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _s2b
// Address: 0x1274d8 - 0x127620
void _s2b_0x1274d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_s2b_0x1274d8");
#endif

    switch (ctx->pc) {
        case 0x127540u: goto label_127540;
        case 0x127574u: goto label_127574;
        case 0x127590u: goto label_127590;
        case 0x1275a8u: goto label_1275a8;
        case 0x1275d0u: goto label_1275d0;
        case 0x1275ecu: goto label_1275ec;
        default: break;
    }

    ctx->pc = 0x1274d8u;

    // 0x1274d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1274d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1274dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1274dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1274e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1274e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1274e4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1274e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274e8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1274e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1274ec: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x1274ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1274f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1274f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1274f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1274f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1274f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1274f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1274fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1274fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127500: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127504: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x127504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x127508: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x127508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12750c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12750cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127510: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x127510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127514: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x127514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x127518: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x127518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12751c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12751Cu;
    {
        const bool branch_taken_0x12751c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12751c) {
            ctx->pc = 0x127520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12751Cu;
            // 0x127520: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x127524u;
            goto label_127524;
        }
    }
    ctx->pc = 0x127524u;
label_127524:
    // 0x127524: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x127524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127528: 0x1812  mflo        $v1
    ctx->pc = 0x127528u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12752c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x12752cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x127530: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x127530u;
    {
        const bool branch_taken_0x127530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127530u;
            // 0x127534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127530) {
            ctx->pc = 0x127564u;
            goto label_127564;
        }
    }
    ctx->pc = 0x127538u;
    // 0x127538: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x127538u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12753c: 0x0  nop
    ctx->pc = 0x12753cu;
    // NOP
label_127540:
    // 0x127540: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x127540u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x127544: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x127544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x127548: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x127548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12754c: 0x0  nop
    ctx->pc = 0x12754cu;
    // NOP
    // 0x127550: 0x0  nop
    ctx->pc = 0x127550u;
    // NOP
    // 0x127554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127554u;
    {
        const bool branch_taken_0x127554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127554) {
            ctx->pc = 0x127540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127540;
        }
    }
    ctx->pc = 0x12755Cu;
    // 0x12755c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12755Cu;
    {
        const bool branch_taken_0x12755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12755Cu;
            // 0x127560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12755c) {
            ctx->pc = 0x12756Cu;
            goto label_12756c;
        }
    }
    ctx->pc = 0x127564u;
label_127564:
    // 0x127564: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x127564u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x127568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12756c:
    // 0x12756c: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x12756Cu;
    SET_GPR_U32(ctx, 31, 0x127574u);
    ctx->pc = 0x127570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12756Cu;
            // 0x127570: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127574u; }
        if (ctx->pc != 0x127574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127574u; }
        if (ctx->pc != 0x127574u) { return; }
    }
    ctx->pc = 0x127574u;
label_127574:
    // 0x127574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12757c: 0xacb60014  sw          $s6, 0x14($a1)
    ctx->pc = 0x12757cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x127580: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x127580u;
    {
        const bool branch_taken_0x127580 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x127584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127580u;
            // 0x127584: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127580) {
            ctx->pc = 0x1275C0u;
            goto label_1275c0;
        }
    }
    ctx->pc = 0x127588u;
    // 0x127588: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x127588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x12758c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x12758cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_127590:
    // 0x127590: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127594: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x127594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127598: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x127598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12759c: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x12759cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1275a0: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x1275A0u;
    SET_GPR_U32(ctx, 31, 0x1275A8u);
    ctx->pc = 0x1275A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1275A0u;
            // 0x1275a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275A8u; }
        if (ctx->pc != 0x1275A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275A8u; }
        if (ctx->pc != 0x1275A8u) { return; }
    }
    ctx->pc = 0x1275A8u;
label_1275a8:
    // 0x1275a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1275a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275ac: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1275acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1275b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1275B0u;
    {
        const bool branch_taken_0x1275b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1275b0) {
            ctx->pc = 0x1275B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1275B0u;
            // 0x1275b4: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127590;
        }
    }
    ctx->pc = 0x1275B8u;
    // 0x1275b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1275B8u;
    {
        const bool branch_taken_0x1275b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1275B8u;
            // 0x1275bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275b8) {
            ctx->pc = 0x1275C4u;
            goto label_1275c4;
        }
    }
    ctx->pc = 0x1275C0u;
label_1275c0:
    // 0x1275c0: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x1275c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_1275c4:
    // 0x1275c4: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x1275c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1275c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1275C8u;
    {
        const bool branch_taken_0x1275c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1275C8u;
            // 0x1275cc: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275c8) {
            ctx->pc = 0x1275F4u;
            goto label_1275f4;
        }
    }
    ctx->pc = 0x1275D0u;
label_1275d0:
    // 0x1275d0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1275d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1275d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1275d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275d8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1275d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1275dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1275dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1275e0: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1275e4: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x1275E4u;
    SET_GPR_U32(ctx, 31, 0x1275ECu);
    ctx->pc = 0x1275E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1275E4u;
            // 0x1275e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275ECu; }
        if (ctx->pc != 0x1275ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275ECu; }
        if (ctx->pc != 0x1275ECu) { return; }
    }
    ctx->pc = 0x1275ECu;
label_1275ec:
    // 0x1275ec: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1275ECu;
    {
        const bool branch_taken_0x1275ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1275F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1275ECu;
            // 0x1275f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275ec) {
            ctx->pc = 0x1275D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1275d0;
        }
    }
    ctx->pc = 0x1275F4u;
label_1275f4:
    // 0x1275f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1275f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1275f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1275f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275fc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1275fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127600: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x127600u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127604: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x127604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127608: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x127608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12760c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12760cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127610: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127618: 0x3e00008  jr          $ra
    ctx->pc = 0x127618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127618u;
            // 0x12761c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127620u;
}
