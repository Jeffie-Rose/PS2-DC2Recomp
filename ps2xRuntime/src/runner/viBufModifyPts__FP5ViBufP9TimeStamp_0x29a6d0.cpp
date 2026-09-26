#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufModifyPts__FP5ViBufP9TimeStamp
// Address: 0x29a6d0 - 0x29a820
void viBufModifyPts__FP5ViBufP9TimeStamp_0x29a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufModifyPts__FP5ViBufP9TimeStamp_0x29a6d0");
#endif

    switch (ctx->pc) {
        case 0x29a708u: goto label_29a708;
        default: break;
    }

    ctx->pc = 0x29a6d0u;

    // 0x29a6d0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x29a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x29a6d4: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x29a6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x29a6d8: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x29a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29a6dc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x29a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29a6e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a6e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A6E4u;
    {
        const bool branch_taken_0x29a6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A6E4u;
            // 0x29a6e8: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6e4) {
            ctx->pc = 0x29A6F0u;
            goto label_29a6f0;
        }
    }
    ctx->pc = 0x29A6ECu;
    // 0x29a6ec: 0x1cd  break       0, 7
    ctx->pc = 0x29a6ecu;
    runtime->handleBreak(rdram, ctx);
label_29a6f0:
    // 0x29a6f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a6f4: 0x4810  mfhi        $t1
    ctx->pc = 0x29a6f4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x29a6f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a6fc: 0x18c00046  blez        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x29A6FCu;
    {
        const bool branch_taken_0x29a6fc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x29A700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A6FCu;
            // 0x29a700: 0x212c0  sll         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6fc) {
            ctx->pc = 0x29A818u;
            goto label_29a818;
        }
    }
    ctx->pc = 0x29A704u;
    // 0x29a704: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x29a704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29a708:
    // 0x29a708: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x29a708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x29a70c: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x29a70cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x29a710: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x29a710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x29a714: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x29a714u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29a718: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x29a718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29a71c: 0x8ced0014  lw          $t5, 0x14($a3)
    ctx->pc = 0x29a71cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x29a720: 0x11a0003d  beqz        $t5, . + 4 + (0x3D << 2)
    ctx->pc = 0x29A720u;
    {
        const bool branch_taken_0x29a720 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a720) {
            ctx->pc = 0x29A818u;
            goto label_29a818;
        }
    }
    ctx->pc = 0x29A728u;
    // 0x29a728: 0x8caa0014  lw          $t2, 0x14($a1)
    ctx->pc = 0x29a728u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x29a72c: 0x1140003a  beqz        $t2, . + 4 + (0x3A << 2)
    ctx->pc = 0x29A72Cu;
    {
        const bool branch_taken_0x29a72c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a72c) {
            ctx->pc = 0x29A818u;
            goto label_29a818;
        }
    }
    ctx->pc = 0x29A734u;
    // 0x29a734: 0x8cec0010  lw          $t4, 0x10($a3)
    ctx->pc = 0x29a734u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x29a738: 0x8cab0010  lw          $t3, 0x10($a1)
    ctx->pc = 0x29a738u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x29a73c: 0x1823021  addu        $a2, $t4, $v0
    ctx->pc = 0x29a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x29a740: 0xcb3023  subu        $a2, $a2, $t3
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x29a744: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A744u;
    {
        const bool branch_taken_0x29a744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A744u;
            // 0x29a748: 0xc2001a  div         $zero, $a2, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a744) {
            ctx->pc = 0x29A750u;
            goto label_29a750;
        }
    }
    ctx->pc = 0x29A74Cu;
    // 0x29a74c: 0x1cd  break       0, 7
    ctx->pc = 0x29a74cu;
    runtime->handleBreak(rdram, ctx);
label_29a750:
    // 0x29a750: 0x3010  mfhi        $a2
    ctx->pc = 0x29a750u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x29a754: 0xca302a  slt         $a2, $a2, $t2
    ctx->pc = 0x29a754u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x29a758: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x29A758u;
    {
        const bool branch_taken_0x29a758 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A758u;
            // 0x29a75c: 0x16a3021  addu        $a2, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a758) {
            ctx->pc = 0x29A7ECu;
            goto label_29a7ec;
        }
    }
    ctx->pc = 0x29A760u;
    // 0x29a760: 0xcc3023  subu        $a2, $a2, $t4
    ctx->pc = 0x29a760u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x29a764: 0x1a6082a  slt         $at, $t5, $a2
    ctx->pc = 0x29a764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29a768: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A768u;
    {
        const bool branch_taken_0x29a768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a768) {
            ctx->pc = 0x29A778u;
            goto label_29a778;
        }
    }
    ctx->pc = 0x29A770u;
    // 0x29a770: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A770u;
    {
        const bool branch_taken_0x29a770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a770) {
            ctx->pc = 0x29A77Cu;
            goto label_29a77c;
        }
    }
    ctx->pc = 0x29A778u;
label_29a778:
    // 0x29a778: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x29a778u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29a77c:
    // 0x29a77c: 0x0  nop
    ctx->pc = 0x29a77cu;
    // NOP
    // 0x29a780: 0x18d3021  addu        $a2, $t4, $t5
    ctx->pc = 0x29a780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x29a784: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A784u;
    {
        const bool branch_taken_0x29a784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A784u;
            // 0x29a788: 0xc2001a  div         $zero, $a2, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a784) {
            ctx->pc = 0x29A790u;
            goto label_29a790;
        }
    }
    ctx->pc = 0x29A78Cu;
    // 0x29a78c: 0x1cd  break       0, 7
    ctx->pc = 0x29a78cu;
    runtime->handleBreak(rdram, ctx);
label_29a790:
    // 0x29a790: 0x3010  mfhi        $a2
    ctx->pc = 0x29a790u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x29a794: 0xace60010  sw          $a2, 0x10($a3)
    ctx->pc = 0x29a794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 6));
    // 0x29a798: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x29a798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x29a79c: 0xcd3023  subu        $a2, $a2, $t5
    ctx->pc = 0x29a79cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x29a7a0: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x29a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x29a7a4: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x29a7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x29a7a8: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x29A7A8u;
    {
        const bool branch_taken_0x29a7a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a7a8) {
            ctx->pc = 0x29A7F4u;
            goto label_29a7f4;
        }
    }
    ctx->pc = 0x29A7B0u;
    // 0x29a7b0: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x29a7b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29a7b4: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A7B4u;
    {
        const bool branch_taken_0x29a7b4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x29a7b4) {
            ctx->pc = 0x29A7CCu;
            goto label_29a7cc;
        }
    }
    ctx->pc = 0x29A7BCu;
    // 0x29a7bc: 0xfce80000  sd          $t0, 0x0($a3)
    ctx->pc = 0x29a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 8));
    // 0x29a7c0: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x29a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x29a7c4: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x29a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x29a7c8: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x29a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
label_29a7cc:
    // 0x29a7cc: 0x0  nop
    ctx->pc = 0x29a7ccu;
    // NOP
    // 0x29a7d0: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x29a7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x29a7d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29a7d8: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A7D8u;
    {
        const bool branch_taken_0x29a7d8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x29a7d8) {
            ctx->pc = 0x29A7E4u;
            goto label_29a7e4;
        }
    }
    ctx->pc = 0x29A7E0u;
    // 0x29a7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29a7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a7e4:
    // 0x29a7e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29A7E4u;
    {
        const bool branch_taken_0x29a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A7E4u;
            // 0x29a7e8: 0xac860058  sw          $a2, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7e4) {
            ctx->pc = 0x29A7F4u;
            goto label_29a7f4;
        }
    }
    ctx->pc = 0x29A7ECu;
label_29a7ec:
    // 0x29a7ec: 0x0  nop
    ctx->pc = 0x29a7ecu;
    // NOP
    // 0x29a7f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29a7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a7f4:
    // 0x29a7f4: 0x0  nop
    ctx->pc = 0x29a7f4u;
    // NOP
    // 0x29a7f8: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x29a7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29a7fc: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x29a7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x29a800: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A800u;
    {
        const bool branch_taken_0x29a800 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A800u;
            // 0x29a804: 0xe6001a  div         $zero, $a3, $a2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a800) {
            ctx->pc = 0x29A80Cu;
            goto label_29a80c;
        }
    }
    ctx->pc = 0x29A808u;
    // 0x29a808: 0x1cd  break       0, 7
    ctx->pc = 0x29a808u;
    runtime->handleBreak(rdram, ctx);
label_29a80c:
    // 0x29a80c: 0x4810  mfhi        $t1
    ctx->pc = 0x29a80cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x29a810: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x29A810u;
    {
        const bool branch_taken_0x29a810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a810) {
            ctx->pc = 0x29A708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a708;
        }
    }
    ctx->pc = 0x29A818u;
label_29a818:
    // 0x29a818: 0x3e00008  jr          $ra
    ctx->pc = 0x29A818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A818u;
            // 0x29a81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A820u;
}
