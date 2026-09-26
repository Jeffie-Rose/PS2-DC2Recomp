#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: init_rnd__FUi
// Address: 0x320480 - 0x320560
void init_rnd__FUi_0x320480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("init_rnd__FUi_0x320480");
#endif

    switch (ctx->pc) {
        case 0x320498u: goto label_320498;
        case 0x3204f4u: goto label_3204f4;
        case 0x32053cu: goto label_32053c;
        case 0x320544u: goto label_320544;
        case 0x32054cu: goto label_32054c;
        default: break;
    }

    ctx->pc = 0x320480u;

    // 0x320480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x320484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32048c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32048cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320490: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x320490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x320494: 0x24a549c0  addiu       $a1, $a1, 0x49C0
    ctx->pc = 0x320494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18880));
label_320498:
    // 0x320498: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x320498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x32049c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x32049cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3204a0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x3204a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x3204a4: 0x28c30038  slti        $v1, $a2, 0x38
    ctx->pc = 0x3204a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x3204a8: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x3204a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x3204ac: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3204acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3204b0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x3204b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x3204b4: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x3204b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x3204b8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x3204b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x3204bc: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x3204bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x3204c0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x3204c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x3204c4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3204C4u;
    {
        const bool branch_taken_0x3204c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3204C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3204C4u;
            // 0x3204c8: 0xad00001c  sw          $zero, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204c4) {
            ctx->pc = 0x320498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320498;
        }
    }
    ctx->pc = 0x3204CCu;
    // 0x3204cc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3204ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3204d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3204d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3204d4: 0xac244a9c  sw          $a0, 0x4A9C($at)
    ctx->pc = 0x3204d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 4));
    // 0x3204d8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3204d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3204dc: 0x24090015  addiu       $t1, $zero, 0x15
    ctx->pc = 0x3204dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3204e0: 0x3c033b9a  lui         $v1, 0x3B9A
    ctx->pc = 0x3204e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15258 << 16));
    // 0x3204e4: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x3204e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x3204e8: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x3204e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x3204ec: 0x3463ca00  ori         $v1, $v1, 0xCA00
    ctx->pc = 0x3204ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51712);
    // 0x3204f0: 0x24a549c0  addiu       $a1, $a1, 0x49C0
    ctx->pc = 0x3204f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18880));
label_3204f4:
    // 0x3204f4: 0x127001a  div         $zero, $t1, $a3
    ctx->pc = 0x3204f4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3204f8: 0x0  nop
    ctx->pc = 0x3204f8u;
    // NOP
    // 0x3204fc: 0x0  nop
    ctx->pc = 0x3204fcu;
    // NOP
    // 0x320500: 0x3010  mfhi        $a2
    ctx->pc = 0x320500u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x320504: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x320504u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x320508: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x320508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x32050c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x32050cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x320510: 0x884023  subu        $t0, $a0, $t0
    ctx->pc = 0x320510u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x320514: 0x5010002  bgez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x320514u;
    {
        const bool branch_taken_0x320514 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x320514) {
            ctx->pc = 0x320520u;
            goto label_320520;
        }
    }
    ctx->pc = 0x32051Cu;
    // 0x32051c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x32051cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_320520:
    // 0x320520: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x320520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x320524: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x320524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x320528: 0x29410037  slti        $at, $t2, 0x37
    ctx->pc = 0x320528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x32052c: 0x1420fff1  bnez        $at, . + 4 + (-0xF << 2)
    ctx->pc = 0x32052Cu;
    {
        const bool branch_taken_0x32052c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x320530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32052Cu;
            // 0x320530: 0x25290015  addiu       $t1, $t1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32052c) {
            ctx->pc = 0x3204F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3204f4;
        }
    }
    ctx->pc = 0x320534u;
    // 0x320534: 0xc0c80f8  jal         func_3203E0
    ctx->pc = 0x320534u;
    SET_GPR_U32(ctx, 31, 0x32053Cu);
    ctx->pc = 0x3203E0u;
    if (runtime->hasFunction(0x3203E0u)) {
        auto targetFn = runtime->lookupFunction(0x3203E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32053Cu; }
        if (ctx->pc != 0x32053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        irn55__Fv_0x3203e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32053Cu; }
        if (ctx->pc != 0x32053Cu) { return; }
    }
    ctx->pc = 0x32053Cu;
label_32053c:
    // 0x32053c: 0xc0c80f8  jal         func_3203E0
    ctx->pc = 0x32053Cu;
    SET_GPR_U32(ctx, 31, 0x320544u);
    ctx->pc = 0x3203E0u;
    if (runtime->hasFunction(0x3203E0u)) {
        auto targetFn = runtime->lookupFunction(0x3203E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320544u; }
        if (ctx->pc != 0x320544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        irn55__Fv_0x3203e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320544u; }
        if (ctx->pc != 0x320544u) { return; }
    }
    ctx->pc = 0x320544u;
label_320544:
    // 0x320544: 0xc0c80f8  jal         func_3203E0
    ctx->pc = 0x320544u;
    SET_GPR_U32(ctx, 31, 0x32054Cu);
    ctx->pc = 0x3203E0u;
    if (runtime->hasFunction(0x3203E0u)) {
        auto targetFn = runtime->lookupFunction(0x3203E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32054Cu; }
        if (ctx->pc != 0x32054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        irn55__Fv_0x3203e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32054Cu; }
        if (ctx->pc != 0x32054Cu) { return; }
    }
    ctx->pc = 0x32054Cu;
label_32054c:
    // 0x32054c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x32054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x320550: 0xaf83a3ec  sw          $v1, -0x5C14($gp)
    ctx->pc = 0x320550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943724), GPR_U32(ctx, 3));
    // 0x320554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320558: 0x3e00008  jr          $ra
    ctx->pc = 0x320558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32055Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320558u;
            // 0x32055c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x320560u;
}
