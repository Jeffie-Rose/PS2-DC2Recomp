#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NextMenuInit__FiP9mgCMemoryPi
// Address: 0x234340 - 0x23453c
void NextMenuInit__FiP9mgCMemoryPi_0x234340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NextMenuInit__FiP9mgCMemoryPi_0x234340");
#endif

    switch (ctx->pc) {
        case 0x2343f4u: goto label_2343f4;
        case 0x234408u: goto label_234408;
        case 0x23441cu: goto label_23441c;
        case 0x234450u: goto label_234450;
        case 0x234464u: goto label_234464;
        case 0x23447cu: goto label_23447c;
        case 0x23449cu: goto label_23449c;
        case 0x2344b0u: goto label_2344b0;
        case 0x2344c4u: goto label_2344c4;
        case 0x2344d8u: goto label_2344d8;
        case 0x2344f0u: goto label_2344f0;
        default: break;
    }

    ctx->pc = 0x234340u;

    // 0x234340: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x234340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x234344: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x234344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x234348: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x234348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x23434c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x234350: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x234350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x234354: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x234354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x234358: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x234358u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23435c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x234360: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x234360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x234364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x234368: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x234368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23436c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23436cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x234370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234374: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x234374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x234378: 0x84700050  lh          $s0, 0x50($v1)
    ctx->pc = 0x234378u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x23437c: 0x12a20058  beq         $s5, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x23437Cu;
    {
        const bool branch_taken_0x23437c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x234380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23437Cu;
            // 0x234380: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23437c) {
            ctx->pc = 0x2344E0u;
            goto label_2344e0;
        }
    }
    ctx->pc = 0x234384u;
    // 0x234384: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x234384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234388: 0x12a20050  beq         $s5, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x234388u;
    {
        const bool branch_taken_0x234388 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x23438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234388u;
            // 0x23438c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234388) {
            ctx->pc = 0x2344CCu;
            goto label_2344cc;
        }
    }
    ctx->pc = 0x234390u;
    // 0x234390: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x234390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x234394: 0x12a20048  beq         $s5, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x234394u;
    {
        const bool branch_taken_0x234394 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x234398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234394u;
            // 0x234398: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234394) {
            ctx->pc = 0x2344B8u;
            goto label_2344b8;
        }
    }
    ctx->pc = 0x23439Cu;
    // 0x23439c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x23439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2343a0: 0x12a20040  beq         $s5, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2343A0u;
    {
        const bool branch_taken_0x2343a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2343A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343A0u;
            // 0x2343a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343a0) {
            ctx->pc = 0x2344A4u;
            goto label_2344a4;
        }
    }
    ctx->pc = 0x2343A8u;
    // 0x2343a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2343a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2343ac: 0x12a2001d  beq         $s5, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2343ACu;
    {
        const bool branch_taken_0x2343ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2343B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343ACu;
            // 0x2343b0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343ac) {
            ctx->pc = 0x234424u;
            goto label_234424;
        }
    }
    ctx->pc = 0x2343B4u;
    // 0x2343b4: 0x12a20016  beq         $s5, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2343B4u;
    {
        const bool branch_taken_0x2343b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2343B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343B4u;
            // 0x2343b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343b4) {
            ctx->pc = 0x234410u;
            goto label_234410;
        }
    }
    ctx->pc = 0x2343BCu;
    // 0x2343bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2343bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2343c0: 0x12a20014  beq         $s5, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2343C0u;
    {
        const bool branch_taken_0x2343c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2343C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343C0u;
            // 0x2343c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343c0) {
            ctx->pc = 0x234414u;
            goto label_234414;
        }
    }
    ctx->pc = 0x2343C8u;
    // 0x2343c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2343c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2343cc: 0x12a2000b  beq         $s5, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2343CCu;
    {
        const bool branch_taken_0x2343cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2343D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343CCu;
            // 0x2343d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343cc) {
            ctx->pc = 0x2343FCu;
            goto label_2343fc;
        }
    }
    ctx->pc = 0x2343D4u;
    // 0x2343d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2343d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2343d8: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2343D8u;
    {
        const bool branch_taken_0x2343d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2343DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343D8u;
            // 0x2343dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343d8) {
            ctx->pc = 0x2343E8u;
            goto label_2343e8;
        }
    }
    ctx->pc = 0x2343E0u;
    // 0x2343e0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2343E0u;
    {
        const bool branch_taken_0x2343e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2343E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343E0u;
            // 0x2343e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343e0) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2343E8u;
label_2343e8:
    // 0x2343e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2343e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2343ec: 0xc091498  jal         func_245260
    ctx->pc = 0x2343ECu;
    SET_GPR_U32(ctx, 31, 0x2343F4u);
    ctx->pc = 0x2343F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2343ECu;
            // 0x2343f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245260u;
    if (runtime->hasFunction(0x245260u)) {
        auto targetFn = runtime->lookupFunction(0x245260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343F4u; }
        if (ctx->pc != 0x2343F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemInit__FP9mgCMemoryPii_0x245260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343F4u; }
        if (ctx->pc != 0x2343F4u) { return; }
    }
    ctx->pc = 0x2343F4u;
label_2343f4:
    // 0x2343f4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2343F4u;
    {
        const bool branch_taken_0x2343f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2343f4) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2343FCu;
label_2343fc:
    // 0x2343fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2343fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234400: 0xc0ad334  jal         func_2B4CD0
    ctx->pc = 0x234400u;
    SET_GPR_U32(ctx, 31, 0x234408u);
    ctx->pc = 0x234404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234400u;
            // 0x234404: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD0u;
    if (runtime->hasFunction(0x2B4CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2B4CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234408u; }
        if (ctx->pc != 0x234408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaChangeInit__FP9mgCMemoryPii_0x2b4cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234408u; }
        if (ctx->pc != 0x234408u) { return; }
    }
    ctx->pc = 0x234408u;
label_234408:
    // 0x234408: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x234408u;
    {
        const bool branch_taken_0x234408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234408) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x234410u;
label_234410:
    // 0x234410: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x234410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_234414:
    // 0x234414: 0xc082744  jal         func_209D10
    ctx->pc = 0x234414u;
    SET_GPR_U32(ctx, 31, 0x23441Cu);
    ctx->pc = 0x234418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234414u;
            // 0x234418: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209D10u;
    if (runtime->hasFunction(0x209D10u)) {
        auto targetFn = runtime->lookupFunction(0x209D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23441Cu; }
        if (ctx->pc != 0x23441Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInventInit__FP9mgCMemoryPii_0x209d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23441Cu; }
        if (ctx->pc != 0x23441Cu) { return; }
    }
    ctx->pc = 0x23441Cu;
label_23441c:
    // 0x23441c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23441Cu;
    {
        const bool branch_taken_0x23441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23441c) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x234424u;
label_234424:
    // 0x234424: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x234428: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234428u;
    {
        const bool branch_taken_0x234428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234428u;
            // 0x23442c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234428) {
            ctx->pc = 0x23443Cu;
            goto label_23443c;
        }
    }
    ctx->pc = 0x234430u;
    // 0x234430: 0x8f8294b8  lw          $v0, -0x6B48($gp)
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
    // 0x234434: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x234434u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234438: 0x0  nop
    ctx->pc = 0x234438u;
    // NOP
label_23443c:
    // 0x23443c: 0x93828f1c  lbu         $v0, -0x70E4($gp)
    ctx->pc = 0x23443cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938396)));
    // 0x234440: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x234440u;
    {
        const bool branch_taken_0x234440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234440) {
            ctx->pc = 0x234488u;
            goto label_234488;
        }
    }
    ctx->pc = 0x234448u;
    // 0x234448: 0xc0a0f24  jal         func_283C90
    ctx->pc = 0x234448u;
    SET_GPR_U32(ctx, 31, 0x234450u);
    ctx->pc = 0x23444Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234448u;
            // 0x23444c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234450u; }
        if (ctx->pc != 0x234450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234450u; }
        if (ctx->pc != 0x234450u) { return; }
    }
    ctx->pc = 0x234450u;
label_234450:
    // 0x234450: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x234450u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234454: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234458: 0x24a5a7e8  addiu       $a1, $a1, -0x5818
    ctx->pc = 0x234458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944744));
    // 0x23445c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x23445Cu;
    SET_GPR_U32(ctx, 31, 0x234464u);
    ctx->pc = 0x234460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23445Cu;
            // 0x234460: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234464u; }
        if (ctx->pc != 0x234464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234464u; }
        if (ctx->pc != 0x234464u) { return; }
    }
    ctx->pc = 0x234464u;
label_234464:
    // 0x234464: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234464u;
    {
        const bool branch_taken_0x234464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234464u;
            // 0x234468: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234464) {
            ctx->pc = 0x234470u;
            goto label_234470;
        }
    }
    ctx->pc = 0x23446Cu;
    // 0x23446c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234470:
    // 0x234470: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x234470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234474: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x234474u;
    SET_GPR_U32(ctx, 31, 0x23447Cu);
    ctx->pc = 0x234478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234474u;
            // 0x234478: 0x24a5a7f0  addiu       $a1, $a1, -0x5810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23447Cu; }
        if (ctx->pc != 0x23447Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23447Cu; }
        if (ctx->pc != 0x23447Cu) { return; }
    }
    ctx->pc = 0x23447Cu;
label_23447c:
    // 0x23447c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23447Cu;
    {
        const bool branch_taken_0x23447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23447Cu;
            // 0x234480: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23447c) {
            ctx->pc = 0x23448Cu;
            goto label_23448c;
        }
    }
    ctx->pc = 0x234484u;
    // 0x234484: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x234484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_234488:
    // 0x234488: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x234488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23448c:
    // 0x23448c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23448cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234490: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x234490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234494: 0xc07c720  jal         func_1F1C80
    ctx->pc = 0x234494u;
    SET_GPR_U32(ctx, 31, 0x23449Cu);
    ctx->pc = 0x234498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234494u;
            // 0x234498: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C80u;
    if (runtime->hasFunction(0x1F1C80u)) {
        auto targetFn = runtime->lookupFunction(0x1F1C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23449Cu; }
        if (ctx->pc != 0x23449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngTreeMapInit__FP9mgCMemoryPiii_0x1f1c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23449Cu; }
        if (ctx->pc != 0x23449Cu) { return; }
    }
    ctx->pc = 0x23449Cu;
label_23449c:
    // 0x23449c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23449Cu;
    {
        const bool branch_taken_0x23449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23449c) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2344A4u;
label_2344a4:
    // 0x2344a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2344a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344a8: 0xc086250  jal         func_218940
    ctx->pc = 0x2344A8u;
    SET_GPR_U32(ctx, 31, 0x2344B0u);
    ctx->pc = 0x2344ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2344A8u;
            // 0x2344ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218940u;
    if (runtime->hasFunction(0x218940u)) {
        auto targetFn = runtime->lookupFunction(0x218940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344B0u; }
        if (ctx->pc != 0x2344B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAquaInit__FP9mgCMemoryPii_0x218940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344B0u; }
        if (ctx->pc != 0x2344B0u) { return; }
    }
    ctx->pc = 0x2344B0u;
label_2344b0:
    // 0x2344b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2344B0u;
    {
        const bool branch_taken_0x2344b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344b0) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2344B8u;
label_2344b8:
    // 0x2344b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2344b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344bc: 0xc0ab674  jal         func_2AD9D0
    ctx->pc = 0x2344BCu;
    SET_GPR_U32(ctx, 31, 0x2344C4u);
    ctx->pc = 0x2344C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2344BCu;
            // 0x2344c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD9D0u;
    if (runtime->hasFunction(0x2AD9D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344C4u; }
        if (ctx->pc != 0x2344C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WorldMoveInit__FP9mgCMemoryPii_0x2ad9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344C4u; }
        if (ctx->pc != 0x2344C4u) { return; }
    }
    ctx->pc = 0x2344C4u;
label_2344c4:
    // 0x2344c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2344C4u;
    {
        const bool branch_taken_0x2344c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344c4) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2344CCu;
label_2344cc:
    // 0x2344cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2344ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344d0: 0xc0aff9c  jal         func_2BFE70
    ctx->pc = 0x2344D0u;
    SET_GPR_U32(ctx, 31, 0x2344D8u);
    ctx->pc = 0x2344D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2344D0u;
            // 0x2344d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFE70u;
    if (runtime->hasFunction(0x2BFE70u)) {
        auto targetFn = runtime->lookupFunction(0x2BFE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344D8u; }
        if (ctx->pc != 0x2344D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuManualInit__FP9mgCMemoryPii_0x2bfe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344D8u; }
        if (ctx->pc != 0x2344D8u) { return; }
    }
    ctx->pc = 0x2344D8u;
label_2344d8:
    // 0x2344d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2344D8u;
    {
        const bool branch_taken_0x2344d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344d8) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2344E0u;
label_2344e0:
    // 0x2344e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2344e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2344e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344e8: 0xc0b09fc  jal         func_2C27F0
    ctx->pc = 0x2344E8u;
    SET_GPR_U32(ctx, 31, 0x2344F0u);
    ctx->pc = 0x2344ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2344E8u;
            // 0x2344ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C27F0u;
    if (runtime->hasFunction(0x2C27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344F0u; }
        if (ctx->pc != 0x2344F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuOptionInit__FP9mgCMemoryPii_0x2c27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344F0u; }
        if (ctx->pc != 0x2344F0u) { return; }
    }
    ctx->pc = 0x2344F0u;
label_2344f0:
    // 0x2344f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2344F0u;
    {
        const bool branch_taken_0x2344f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344f0) {
            ctx->pc = 0x234504u;
            goto label_234504;
        }
    }
    ctx->pc = 0x2344F8u;
    // 0x2344f8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2344f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2344fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2344FCu;
    {
        const bool branch_taken_0x2344fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2344FCu;
            // 0x234500: 0xac550058  sw          $s5, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344fc) {
            ctx->pc = 0x234510u;
            goto label_234510;
        }
    }
    ctx->pc = 0x234504u;
label_234504:
    // 0x234504: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x234504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x234508: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x234508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23450c: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x23450cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_234510:
    // 0x234510: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234514: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x234514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x234518: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x234518u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23451c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23451cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234520: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x234520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x234524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x234528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23452c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23452cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234534: 0x3e00008  jr          $ra
    ctx->pc = 0x234534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234534u;
            // 0x234538: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23453Cu;
}
