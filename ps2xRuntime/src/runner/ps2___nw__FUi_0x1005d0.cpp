#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __nw__FUi
// Address: 0x1005d0 - 0x10067c
void ps2___nw__FUi_0x1005d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___nw__FUi_0x1005d0");
#endif

    switch (ctx->pc) {
        case 0x1005d0u: goto label_1005d0;
        case 0x1005d4u: goto label_1005d4;
        case 0x1005d8u: goto label_1005d8;
        case 0x1005dcu: goto label_1005dc;
        case 0x1005e0u: goto label_1005e0;
        case 0x1005e4u: goto label_1005e4;
        case 0x1005e8u: goto label_1005e8;
        case 0x1005ecu: goto label_1005ec;
        case 0x1005f0u: goto label_1005f0;
        case 0x1005f4u: goto label_1005f4;
        case 0x1005f8u: goto label_1005f8;
        case 0x1005fcu: goto label_1005fc;
        case 0x100600u: goto label_100600;
        case 0x100604u: goto label_100604;
        case 0x100608u: goto label_100608;
        case 0x10060cu: goto label_10060c;
        case 0x100610u: goto label_100610;
        case 0x100614u: goto label_100614;
        case 0x100618u: goto label_100618;
        case 0x10061cu: goto label_10061c;
        case 0x100620u: goto label_100620;
        case 0x100624u: goto label_100624;
        case 0x100628u: goto label_100628;
        case 0x10062cu: goto label_10062c;
        case 0x100630u: goto label_100630;
        case 0x100634u: goto label_100634;
        case 0x100638u: goto label_100638;
        case 0x10063cu: goto label_10063c;
        case 0x100640u: goto label_100640;
        case 0x100644u: goto label_100644;
        case 0x100648u: goto label_100648;
        case 0x10064cu: goto label_10064c;
        case 0x100650u: goto label_100650;
        case 0x100654u: goto label_100654;
        case 0x100658u: goto label_100658;
        case 0x10065cu: goto label_10065c;
        case 0x100660u: goto label_100660;
        case 0x100664u: goto label_100664;
        case 0x100668u: goto label_100668;
        case 0x10066cu: goto label_10066c;
        case 0x100670u: goto label_100670;
        case 0x100674u: goto label_100674;
        case 0x100678u: goto label_100678;
        default: break;
    }

    ctx->pc = 0x1005d0u;

label_1005d0:
    // 0x1005d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1005d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1005d4:
    // 0x1005d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1005d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1005d8:
    // 0x1005d8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1005d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1005dc:
    // 0x1005dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1005dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1005e0:
    // 0x1005e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1005e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1005e4:
    // 0x1005e4: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
label_1005e8:
    if (ctx->pc == 0x1005E8u) {
        ctx->pc = 0x1005E8u;
            // 0x1005e8: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->pc = 0x1005ECu;
        goto label_1005ec;
    }
    ctx->pc = 0x1005E4u;
    {
        const bool branch_taken_0x1005e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1005E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005E4u;
            // 0x1005e8: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005e4) {
            ctx->pc = 0x100650u;
            goto label_100650;
        }
    }
    ctx->pc = 0x1005ECu;
label_1005ec:
    // 0x1005ec: 0x10000018  b           . + 4 + (0x18 << 2)
label_1005f0:
    if (ctx->pc == 0x1005F0u) {
        ctx->pc = 0x1005F0u;
            // 0x1005f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1005F4u;
        goto label_1005f4;
    }
    ctx->pc = 0x1005ECu;
    {
        const bool branch_taken_0x1005ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005ECu;
            // 0x1005f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005ec) {
            ctx->pc = 0x100650u;
            goto label_100650;
        }
    }
    ctx->pc = 0x1005F4u;
label_1005f4:
    // 0x1005f4: 0x8c226300  lw          $v0, 0x6300($at)
    ctx->pc = 0x1005f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25344)));
label_1005f8:
    // 0x1005f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1005fc:
    if (ctx->pc == 0x1005FCu) {
        ctx->pc = 0x100600u;
        goto label_100600;
    }
    ctx->pc = 0x1005F8u;
    {
        const bool branch_taken_0x1005f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005f8) {
            ctx->pc = 0x100610u;
            goto label_100610;
        }
    }
    ctx->pc = 0x100600u;
label_100600:
    // 0x100600: 0x40f809  jalr        $v0
label_100604:
    if (ctx->pc == 0x100604u) {
        ctx->pc = 0x100608u;
        goto label_100608;
    }
    ctx->pc = 0x100600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100608u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x100608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100608u; }
            if (ctx->pc != 0x100608u) { return; }
        }
        }
    }
    ctx->pc = 0x100608u;
label_100608:
    // 0x100608: 0x10000012  b           . + 4 + (0x12 << 2)
label_10060c:
    if (ctx->pc == 0x10060Cu) {
        ctx->pc = 0x10060Cu;
            // 0x10060c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100610u;
        goto label_100610;
    }
    ctx->pc = 0x100608u;
    {
        const bool branch_taken_0x100608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100608u;
            // 0x10060c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100608) {
            ctx->pc = 0x100654u;
            goto label_100654;
        }
    }
    ctx->pc = 0x100610u;
label_100610:
    // 0x100610: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x100610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_100614:
    // 0x100614: 0x80226308  lb          $v0, 0x6308($at)
    ctx->pc = 0x100614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 25352)));
label_100618:
    // 0x100618: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10061c:
    if (ctx->pc == 0x10061Cu) {
        ctx->pc = 0x10061Cu;
            // 0x10061c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x100620u;
        goto label_100620;
    }
    ctx->pc = 0x100618u;
    {
        const bool branch_taken_0x100618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100618u;
            // 0x10061c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100618) {
            ctx->pc = 0x100648u;
            goto label_100648;
        }
    }
    ctx->pc = 0x100620u;
label_100620:
    // 0x100620: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x100620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_100624:
    // 0x100624: 0x24424e50  addiu       $v0, $v0, 0x4E50
    ctx->pc = 0x100624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20048));
label_100628:
    // 0x100628: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x100628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
label_10062c:
    // 0x10062c: 0x2484ee30  addiu       $a0, $a0, -0x11D0
    ctx->pc = 0x10062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962736));
label_100630:
    // 0x100630: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x100630u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
label_100634:
    // 0x100634: 0x27c5003c  addiu       $a1, $fp, 0x3C
    ctx->pc = 0x100634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
label_100638:
    // 0x100638: 0xc040880  jal         func_102200
label_10063c:
    if (ctx->pc == 0x10063Cu) {
        ctx->pc = 0x10063Cu;
            // 0x10063c: 0x24c60560  addiu       $a2, $a2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1376));
        ctx->pc = 0x100640u;
        goto label_100640;
    }
    ctx->pc = 0x100638u;
    SET_GPR_U32(ctx, 31, 0x100640u);
    ctx->pc = 0x10063Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100638u;
            // 0x10063c: 0x24c60560  addiu       $a2, $a2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100640u; }
        if (ctx->pc != 0x100640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100640u; }
        if (ctx->pc != 0x100640u) { return; }
    }
    ctx->pc = 0x100640u;
label_100640:
    // 0x100640: 0x10000003  b           . + 4 + (0x3 << 2)
label_100644:
    if (ctx->pc == 0x100644u) {
        ctx->pc = 0x100648u;
        goto label_100648;
    }
    ctx->pc = 0x100640u;
    {
        const bool branch_taken_0x100640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100640) {
            ctx->pc = 0x100650u;
            goto label_100650;
        }
    }
    ctx->pc = 0x100648u;
label_100648:
    // 0x100648: 0x10000006  b           . + 4 + (0x6 << 2)
label_10064c:
    if (ctx->pc == 0x10064Cu) {
        ctx->pc = 0x10064Cu;
            // 0x10064c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100650u;
        goto label_100650;
    }
    ctx->pc = 0x100648u;
    {
        const bool branch_taken_0x100648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10064Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100648u;
            // 0x10064c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100648) {
            ctx->pc = 0x100664u;
            goto label_100664;
        }
    }
    ctx->pc = 0x100650u;
label_100650:
    // 0x100650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100654:
    // 0x100654: 0xc049928  jal         func_1264A0
label_100658:
    if (ctx->pc == 0x100658u) {
        ctx->pc = 0x10065Cu;
        goto label_10065c;
    }
    ctx->pc = 0x100654u;
    SET_GPR_U32(ctx, 31, 0x10065Cu);
    ctx->pc = 0x1264A0u;
    if (runtime->hasFunction(0x1264A0u)) {
        auto targetFn = runtime->lookupFunction(0x1264A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10065Cu; }
        if (ctx->pc != 0x10065Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x1264a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10065Cu; }
        if (ctx->pc != 0x10065Cu) { return; }
    }
    ctx->pc = 0x10065Cu;
label_10065c:
    // 0x10065c: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
label_100660:
    if (ctx->pc == 0x100660u) {
        ctx->pc = 0x100660u;
            // 0x100660: 0x3c010032  lui         $at, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
        ctx->pc = 0x100664u;
        goto label_100664;
    }
    ctx->pc = 0x10065Cu;
    {
        const bool branch_taken_0x10065c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10065Cu;
            // 0x100660: 0x3c010032  lui         $at, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10065c) {
            ctx->pc = 0x1005F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1005f4;
        }
    }
    ctx->pc = 0x100664u;
label_100664:
    // 0x100664: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x100664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_100668:
    // 0x100668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10066c:
    // 0x10066c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x10066cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_100670:
    // 0x100670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100674:
    // 0x100674: 0x3e00008  jr          $ra
label_100678:
    if (ctx->pc == 0x100678u) {
        ctx->pc = 0x100678u;
            // 0x100678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x10067Cu;
        goto label_fallthrough_0x100674;
    }
    ctx->pc = 0x100674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100674u;
            // 0x100678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x100674:
    ctx->pc = 0x10067Cu;
}
