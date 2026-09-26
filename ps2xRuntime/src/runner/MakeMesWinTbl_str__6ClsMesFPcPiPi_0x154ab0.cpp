#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWinTbl_str__6ClsMesFPcPiPi
// Address: 0x154ab0 - 0x1556ac
void MakeMesWinTbl_str__6ClsMesFPcPiPi_0x154ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWinTbl_str__6ClsMesFPcPiPi_0x154ab0");
#endif

    switch (ctx->pc) {
        case 0x154af0u: goto label_154af0;
        case 0x154b04u: goto label_154b04;
        case 0x154b18u: goto label_154b18;
        case 0x154b24u: goto label_154b24;
        case 0x154b38u: goto label_154b38;
        case 0x154b6cu: goto label_154b6c;
        case 0x154b94u: goto label_154b94;
        case 0x154bb4u: goto label_154bb4;
        case 0x154bd4u: goto label_154bd4;
        case 0x154bf4u: goto label_154bf4;
        case 0x154c14u: goto label_154c14;
        case 0x154c34u: goto label_154c34;
        case 0x154c54u: goto label_154c54;
        case 0x154c74u: goto label_154c74;
        case 0x154c94u: goto label_154c94;
        case 0x154cb4u: goto label_154cb4;
        case 0x154cd8u: goto label_154cd8;
        case 0x154d0cu: goto label_154d0c;
        case 0x154d34u: goto label_154d34;
        case 0x154d54u: goto label_154d54;
        case 0x154d74u: goto label_154d74;
        case 0x154d94u: goto label_154d94;
        case 0x154db4u: goto label_154db4;
        case 0x154dd4u: goto label_154dd4;
        case 0x154df4u: goto label_154df4;
        case 0x154e14u: goto label_154e14;
        case 0x154e34u: goto label_154e34;
        case 0x154e54u: goto label_154e54;
        case 0x154e78u: goto label_154e78;
        case 0x154eacu: goto label_154eac;
        case 0x154ed4u: goto label_154ed4;
        case 0x154ef0u: goto label_154ef0;
        case 0x154f04u: goto label_154f04;
        case 0x154f20u: goto label_154f20;
        case 0x154f34u: goto label_154f34;
        case 0x154f50u: goto label_154f50;
        case 0x154f64u: goto label_154f64;
        case 0x154f80u: goto label_154f80;
        case 0x154f94u: goto label_154f94;
        case 0x154fb0u: goto label_154fb0;
        case 0x154fc4u: goto label_154fc4;
        case 0x154fe0u: goto label_154fe0;
        case 0x154ff4u: goto label_154ff4;
        case 0x155010u: goto label_155010;
        case 0x155024u: goto label_155024;
        case 0x155040u: goto label_155040;
        case 0x155054u: goto label_155054;
        case 0x155070u: goto label_155070;
        case 0x155084u: goto label_155084;
        case 0x1550a0u: goto label_1550a0;
        case 0x1550b4u: goto label_1550b4;
        case 0x1550d0u: goto label_1550d0;
        case 0x1550e4u: goto label_1550e4;
        case 0x155100u: goto label_155100;
        case 0x155114u: goto label_155114;
        case 0x155130u: goto label_155130;
        case 0x155144u: goto label_155144;
        case 0x155160u: goto label_155160;
        case 0x155174u: goto label_155174;
        case 0x155190u: goto label_155190;
        case 0x1551a4u: goto label_1551a4;
        case 0x1551c0u: goto label_1551c0;
        case 0x1551f4u: goto label_1551f4;
        case 0x15521cu: goto label_15521c;
        case 0x15523cu: goto label_15523c;
        case 0x15525cu: goto label_15525c;
        case 0x15527cu: goto label_15527c;
        case 0x15529cu: goto label_15529c;
        case 0x1552bcu: goto label_1552bc;
        case 0x1552dcu: goto label_1552dc;
        case 0x1552fcu: goto label_1552fc;
        case 0x15531cu: goto label_15531c;
        case 0x15533cu: goto label_15533c;
        case 0x15535cu: goto label_15535c;
        case 0x15537cu: goto label_15537c;
        case 0x15539cu: goto label_15539c;
        case 0x1553bcu: goto label_1553bc;
        case 0x1553dcu: goto label_1553dc;
        case 0x1553fcu: goto label_1553fc;
        case 0x155420u: goto label_155420;
        case 0x155450u: goto label_155450;
        case 0x155474u: goto label_155474;
        case 0x155480u: goto label_155480;
        case 0x1554a0u: goto label_1554a0;
        case 0x1554bcu: goto label_1554bc;
        case 0x1554d8u: goto label_1554d8;
        case 0x1554f4u: goto label_1554f4;
        case 0x155518u: goto label_155518;
        case 0x155544u: goto label_155544;
        case 0x155560u: goto label_155560;
        case 0x15556cu: goto label_15556c;
        case 0x1555acu: goto label_1555ac;
        case 0x1555c8u: goto label_1555c8;
        case 0x1555e0u: goto label_1555e0;
        case 0x1555fcu: goto label_1555fc;
        case 0x155608u: goto label_155608;
        case 0x155630u: goto label_155630;
        case 0x15563cu: goto label_15563c;
        default: break;
    }

    ctx->pc = 0x154ab0u;

    // 0x154ab0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x154ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x154ab4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x154ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x154ab8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x154ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x154abc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x154abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x154ac0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x154ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x154ac4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x154ac8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154acc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x154accu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154ad4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x154ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154adc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x154adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ae0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x154ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ae8: 0xc04a422  jal         func_129088
    ctx->pc = 0x154AE8u;
    SET_GPR_U32(ctx, 31, 0x154AF0u);
    ctx->pc = 0x154AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154AE8u;
            // 0x154aec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154AF0u; }
        if (ctx->pc != 0x154AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154AF0u; }
        if (ctx->pc != 0x154AF0u) { return; }
    }
    ctx->pc = 0x154AF0u;
label_154af0:
    // 0x154af0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x154af0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154af4: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x154af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x154af8: 0x102002e0  beqz        $at, . + 4 + (0x2E0 << 2)
    ctx->pc = 0x154AF8u;
    {
        const bool branch_taken_0x154af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154AF8u;
            // 0x154afc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154af8) {
            ctx->pc = 0x15567Cu;
            goto label_15567c;
        }
    }
    ctx->pc = 0x154B00u;
    // 0x154b00: 0x2758021  addu        $s0, $s3, $s5
    ctx->pc = 0x154b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_154b04:
    // 0x154b04: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154b08: 0x24a529c8  addiu       $a1, $a1, 0x29C8
    ctx->pc = 0x154b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10696));
    // 0x154b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b10: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154B10u;
    SET_GPR_U32(ctx, 31, 0x154B18u);
    ctx->pc = 0x154B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B10u;
            // 0x154b14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B18u; }
        if (ctx->pc != 0x154B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B18u; }
        if (ctx->pc != 0x154B18u) { return; }
    }
    ctx->pc = 0x154B18u;
label_154b18:
    // 0x154b18: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x154B18u;
    {
        const bool branch_taken_0x154b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154b18) {
            ctx->pc = 0x154B58u;
            goto label_154b58;
        }
    }
    ctx->pc = 0x154B20u;
    // 0x154b20: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x154b20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_154b24:
    // 0x154b24: 0x0  nop
    ctx->pc = 0x154b24u;
    // NOP
    // 0x154b28: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x154b2c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x154b2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154b30: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x154B30u;
    SET_GPR_U32(ctx, 31, 0x154B38u);
    ctx->pc = 0x154B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B30u;
            // 0x154b34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B38u; }
        if (ctx->pc != 0x154B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B38u; }
        if (ctx->pc != 0x154B38u) { return; }
    }
    ctx->pc = 0x154B38u;
label_154b38:
    // 0x154b38: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x154b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x154b3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x154B3Cu;
    {
        const bool branch_taken_0x154b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x154b3c) {
            ctx->pc = 0x154B4Cu;
            goto label_154b4c;
        }
    }
    ctx->pc = 0x154B44u;
    // 0x154b44: 0x100002c9  b           . + 4 + (0x2C9 << 2)
    ctx->pc = 0x154B44u;
    {
        const bool branch_taken_0x154b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B44u;
            // 0x154b48: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b44) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x154B4Cu;
label_154b4c:
    // 0x154b4c: 0x0  nop
    ctx->pc = 0x154b4cu;
    // NOP
    // 0x154b50: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x154B50u;
    {
        const bool branch_taken_0x154b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B50u;
            // 0x154b54: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b50) {
            ctx->pc = 0x154B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154b24;
        }
    }
    ctx->pc = 0x154B58u;
label_154b58:
    // 0x154b58: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b60: 0x24a529d0  addiu       $a1, $a1, 0x29D0
    ctx->pc = 0x154b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10704));
    // 0x154b64: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154B64u;
    SET_GPR_U32(ctx, 31, 0x154B6Cu);
    ctx->pc = 0x154B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B64u;
            // 0x154b68: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B6Cu; }
        if (ctx->pc != 0x154B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B6Cu; }
        if (ctx->pc != 0x154B6Cu) { return; }
    }
    ctx->pc = 0x154B6Cu;
label_154b6c:
    // 0x154b6c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x154B6Cu;
    {
        const bool branch_taken_0x154b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154b6c) {
            ctx->pc = 0x154CF8u;
            goto label_154cf8;
        }
    }
    ctx->pc = 0x154B74u;
    // 0x154b74: 0x26b50005  addiu       $s5, $s5, 0x5
    ctx->pc = 0x154b74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
    // 0x154b78: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154b7c: 0x275b021  addu        $s6, $s3, $s5
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x154b80: 0x24a529d8  addiu       $a1, $a1, 0x29D8
    ctx->pc = 0x154b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10712));
    // 0x154b84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b88: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x154b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154b8c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154B8Cu;
    SET_GPR_U32(ctx, 31, 0x154B94u);
    ctx->pc = 0x154B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B8Cu;
            // 0x154b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B94u; }
        if (ctx->pc != 0x154B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B94u; }
        if (ctx->pc != 0x154B94u) { return; }
    }
    ctx->pc = 0x154B94u;
label_154b94:
    // 0x154b94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154B94u;
    {
        const bool branch_taken_0x154b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154b94) {
            ctx->pc = 0x154BA0u;
            goto label_154ba0;
        }
    }
    ctx->pc = 0x154B9Cu;
    // 0x154b9c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x154b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154ba0:
    // 0x154ba0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154ba4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ba8: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x154ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x154bac: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154BACu;
    SET_GPR_U32(ctx, 31, 0x154BB4u);
    ctx->pc = 0x154BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154BACu;
            // 0x154bb0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BB4u; }
        if (ctx->pc != 0x154BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BB4u; }
        if (ctx->pc != 0x154BB4u) { return; }
    }
    ctx->pc = 0x154BB4u;
label_154bb4:
    // 0x154bb4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154BB4u;
    {
        const bool branch_taken_0x154bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154bb4) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154BBCu;
    // 0x154bbc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x154bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154bc0:
    // 0x154bc0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154bc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bc8: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x154bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
    // 0x154bcc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154BCCu;
    SET_GPR_U32(ctx, 31, 0x154BD4u);
    ctx->pc = 0x154BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154BCCu;
            // 0x154bd0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BD4u; }
        if (ctx->pc != 0x154BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BD4u; }
        if (ctx->pc != 0x154BD4u) { return; }
    }
    ctx->pc = 0x154BD4u;
label_154bd4:
    // 0x154bd4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154BD4u;
    {
        const bool branch_taken_0x154bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154bd4) {
            ctx->pc = 0x154BE0u;
            goto label_154be0;
        }
    }
    ctx->pc = 0x154BDCu;
    // 0x154bdc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x154bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154be0:
    // 0x154be0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154be4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154be8: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x154be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x154bec: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154BECu;
    SET_GPR_U32(ctx, 31, 0x154BF4u);
    ctx->pc = 0x154BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154BECu;
            // 0x154bf0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BF4u; }
        if (ctx->pc != 0x154BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BF4u; }
        if (ctx->pc != 0x154BF4u) { return; }
    }
    ctx->pc = 0x154BF4u;
label_154bf4:
    // 0x154bf4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154BF4u;
    {
        const bool branch_taken_0x154bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154bf4) {
            ctx->pc = 0x154C00u;
            goto label_154c00;
        }
    }
    ctx->pc = 0x154BFCu;
    // 0x154bfc: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x154bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_154c00:
    // 0x154c00: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154c04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c08: 0x24a529f8  addiu       $a1, $a1, 0x29F8
    ctx->pc = 0x154c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    // 0x154c0c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154C0Cu;
    SET_GPR_U32(ctx, 31, 0x154C14u);
    ctx->pc = 0x154C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C0Cu;
            // 0x154c10: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C14u; }
        if (ctx->pc != 0x154C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C14u; }
        if (ctx->pc != 0x154C14u) { return; }
    }
    ctx->pc = 0x154C14u;
label_154c14:
    // 0x154c14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154C14u;
    {
        const bool branch_taken_0x154c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c14) {
            ctx->pc = 0x154C20u;
            goto label_154c20;
        }
    }
    ctx->pc = 0x154C1Cu;
    // 0x154c1c: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x154c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_154c20:
    // 0x154c20: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154c24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c28: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x154c2c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154C2Cu;
    SET_GPR_U32(ctx, 31, 0x154C34u);
    ctx->pc = 0x154C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C2Cu;
            // 0x154c30: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C34u; }
        if (ctx->pc != 0x154C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C34u; }
        if (ctx->pc != 0x154C34u) { return; }
    }
    ctx->pc = 0x154C34u;
label_154c34:
    // 0x154c34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154C34u;
    {
        const bool branch_taken_0x154c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c34) {
            ctx->pc = 0x154C40u;
            goto label_154c40;
        }
    }
    ctx->pc = 0x154C3Cu;
    // 0x154c3c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_154c40:
    // 0x154c40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154c44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c48: 0x24a52a08  addiu       $a1, $a1, 0x2A08
    ctx->pc = 0x154c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10760));
    // 0x154c4c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154C4Cu;
    SET_GPR_U32(ctx, 31, 0x154C54u);
    ctx->pc = 0x154C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C4Cu;
            // 0x154c50: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C54u; }
        if (ctx->pc != 0x154C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C54u; }
        if (ctx->pc != 0x154C54u) { return; }
    }
    ctx->pc = 0x154C54u;
label_154c54:
    // 0x154c54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154C54u;
    {
        const bool branch_taken_0x154c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c54) {
            ctx->pc = 0x154C60u;
            goto label_154c60;
        }
    }
    ctx->pc = 0x154C5Cu;
    // 0x154c5c: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x154c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_154c60:
    // 0x154c60: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154c64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c68: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x154c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x154c6c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154C6Cu;
    SET_GPR_U32(ctx, 31, 0x154C74u);
    ctx->pc = 0x154C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C6Cu;
            // 0x154c70: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C74u; }
        if (ctx->pc != 0x154C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C74u; }
        if (ctx->pc != 0x154C74u) { return; }
    }
    ctx->pc = 0x154C74u;
label_154c74:
    // 0x154c74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154C74u;
    {
        const bool branch_taken_0x154c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c74) {
            ctx->pc = 0x154C80u;
            goto label_154c80;
        }
    }
    ctx->pc = 0x154C7Cu;
    // 0x154c7c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x154c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_154c80:
    // 0x154c80: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154c84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c88: 0x24a52a18  addiu       $a1, $a1, 0x2A18
    ctx->pc = 0x154c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10776));
    // 0x154c8c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154C8Cu;
    SET_GPR_U32(ctx, 31, 0x154C94u);
    ctx->pc = 0x154C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C8Cu;
            // 0x154c90: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C94u; }
        if (ctx->pc != 0x154C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C94u; }
        if (ctx->pc != 0x154C94u) { return; }
    }
    ctx->pc = 0x154C94u;
label_154c94:
    // 0x154c94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154C94u;
    {
        const bool branch_taken_0x154c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c94) {
            ctx->pc = 0x154CA0u;
            goto label_154ca0;
        }
    }
    ctx->pc = 0x154C9Cu;
    // 0x154c9c: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x154c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_154ca0:
    // 0x154ca0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154ca4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ca8: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x154ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x154cac: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154CACu;
    SET_GPR_U32(ctx, 31, 0x154CB4u);
    ctx->pc = 0x154CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154CACu;
            // 0x154cb0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CB4u; }
        if (ctx->pc != 0x154CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CB4u; }
        if (ctx->pc != 0x154CB4u) { return; }
    }
    ctx->pc = 0x154CB4u;
label_154cb4:
    // 0x154cb4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154CB4u;
    {
        const bool branch_taken_0x154cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154cb4) {
            ctx->pc = 0x154CC0u;
            goto label_154cc0;
        }
    }
    ctx->pc = 0x154CBCu;
    // 0x154cbc: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x154cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_154cc0:
    // 0x154cc0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x154CC0u;
    {
        const bool branch_taken_0x154cc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CC0u;
            // 0x154cc4: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cc0) {
            ctx->pc = 0x154CF8u;
            goto label_154cf8;
        }
    }
    ctx->pc = 0x154CC8u;
    // 0x154cc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x154cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ccc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cd0: 0xc0551dc  jal         func_154770
    ctx->pc = 0x154CD0u;
    SET_GPR_U32(ctx, 31, 0x154CD8u);
    ctx->pc = 0x154CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154CD0u;
            // 0x154cd4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154770u;
    if (runtime->hasFunction(0x154770u)) {
        auto targetFn = runtime->lookupFunction(0x154770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CD8u; }
        if (ctx->pc != 0x154CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_value__6ClsMesFiPiPi_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CD8u; }
        if (ctx->pc != 0x154CD8u) { return; }
    }
    ctx->pc = 0x154CD8u;
label_154cd8:
    // 0x154cd8: 0x2a01000a  slti        $at, $s0, 0xA
    ctx->pc = 0x154cd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x154cdc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x154CDCu;
    {
        const bool branch_taken_0x154cdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154cdc) {
            ctx->pc = 0x154CECu;
            goto label_154cec;
        }
    }
    ctx->pc = 0x154CE4u;
    // 0x154ce4: 0x10000261  b           . + 4 + (0x261 << 2)
    ctx->pc = 0x154CE4u;
    {
        const bool branch_taken_0x154ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CE4u;
            // 0x154ce8: 0x26b50003  addiu       $s5, $s5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ce4) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x154CECu;
label_154cec:
    // 0x154cec: 0x0  nop
    ctx->pc = 0x154cecu;
    // NOP
    // 0x154cf0: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x154CF0u;
    {
        const bool branch_taken_0x154cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CF0u;
            // 0x154cf4: 0x26b50005  addiu       $s5, $s5, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cf0) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x154CF8u;
label_154cf8:
    // 0x154cf8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154cfc: 0x2752021  addu        $a0, $s3, $s5
    ctx->pc = 0x154cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x154d00: 0x24a52a28  addiu       $a1, $a1, 0x2A28
    ctx->pc = 0x154d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10792));
    // 0x154d04: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154D04u;
    SET_GPR_U32(ctx, 31, 0x154D0Cu);
    ctx->pc = 0x154D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D04u;
            // 0x154d08: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D0Cu; }
        if (ctx->pc != 0x154D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D0Cu; }
        if (ctx->pc != 0x154D0Cu) { return; }
    }
    ctx->pc = 0x154D0Cu;
label_154d0c:
    // 0x154d0c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x154D0Cu;
    {
        const bool branch_taken_0x154d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d0c) {
            ctx->pc = 0x154E98u;
            goto label_154e98;
        }
    }
    ctx->pc = 0x154D14u;
    // 0x154d14: 0x26b50007  addiu       $s5, $s5, 0x7
    ctx->pc = 0x154d14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
    // 0x154d18: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154d1c: 0x275b021  addu        $s6, $s3, $s5
    ctx->pc = 0x154d1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x154d20: 0x24a52a30  addiu       $a1, $a1, 0x2A30
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10800));
    // 0x154d24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x154d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154d2c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154D2Cu;
    SET_GPR_U32(ctx, 31, 0x154D34u);
    ctx->pc = 0x154D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D2Cu;
            // 0x154d30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D34u; }
        if (ctx->pc != 0x154D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D34u; }
        if (ctx->pc != 0x154D34u) { return; }
    }
    ctx->pc = 0x154D34u;
label_154d34:
    // 0x154d34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154D34u;
    {
        const bool branch_taken_0x154d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d34) {
            ctx->pc = 0x154D40u;
            goto label_154d40;
        }
    }
    ctx->pc = 0x154D3Cu;
    // 0x154d3c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x154d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154d40:
    // 0x154d40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154d44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d48: 0x24a52a38  addiu       $a1, $a1, 0x2A38
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10808));
    // 0x154d4c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154D4Cu;
    SET_GPR_U32(ctx, 31, 0x154D54u);
    ctx->pc = 0x154D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D4Cu;
            // 0x154d50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D54u; }
        if (ctx->pc != 0x154D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D54u; }
        if (ctx->pc != 0x154D54u) { return; }
    }
    ctx->pc = 0x154D54u;
label_154d54:
    // 0x154d54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154D54u;
    {
        const bool branch_taken_0x154d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d54) {
            ctx->pc = 0x154D60u;
            goto label_154d60;
        }
    }
    ctx->pc = 0x154D5Cu;
    // 0x154d5c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x154d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154d60:
    // 0x154d60: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154d64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d68: 0x24a52a40  addiu       $a1, $a1, 0x2A40
    ctx->pc = 0x154d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
    // 0x154d6c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154D6Cu;
    SET_GPR_U32(ctx, 31, 0x154D74u);
    ctx->pc = 0x154D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D6Cu;
            // 0x154d70: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D74u; }
        if (ctx->pc != 0x154D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D74u; }
        if (ctx->pc != 0x154D74u) { return; }
    }
    ctx->pc = 0x154D74u;
label_154d74:
    // 0x154d74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154D74u;
    {
        const bool branch_taken_0x154d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d74) {
            ctx->pc = 0x154D80u;
            goto label_154d80;
        }
    }
    ctx->pc = 0x154D7Cu;
    // 0x154d7c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x154d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154d80:
    // 0x154d80: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154d84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d88: 0x24a52a48  addiu       $a1, $a1, 0x2A48
    ctx->pc = 0x154d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10824));
    // 0x154d8c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154D8Cu;
    SET_GPR_U32(ctx, 31, 0x154D94u);
    ctx->pc = 0x154D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D8Cu;
            // 0x154d90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D94u; }
        if (ctx->pc != 0x154D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D94u; }
        if (ctx->pc != 0x154D94u) { return; }
    }
    ctx->pc = 0x154D94u;
label_154d94:
    // 0x154d94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154D94u;
    {
        const bool branch_taken_0x154d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d94) {
            ctx->pc = 0x154DA0u;
            goto label_154da0;
        }
    }
    ctx->pc = 0x154D9Cu;
    // 0x154d9c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x154d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_154da0:
    // 0x154da0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154da4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154da8: 0x24a52a50  addiu       $a1, $a1, 0x2A50
    ctx->pc = 0x154da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10832));
    // 0x154dac: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154DACu;
    SET_GPR_U32(ctx, 31, 0x154DB4u);
    ctx->pc = 0x154DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154DACu;
            // 0x154db0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DB4u; }
        if (ctx->pc != 0x154DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DB4u; }
        if (ctx->pc != 0x154DB4u) { return; }
    }
    ctx->pc = 0x154DB4u;
label_154db4:
    // 0x154db4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154DB4u;
    {
        const bool branch_taken_0x154db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154db4) {
            ctx->pc = 0x154DC0u;
            goto label_154dc0;
        }
    }
    ctx->pc = 0x154DBCu;
    // 0x154dbc: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x154dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_154dc0:
    // 0x154dc0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154dc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154dc8: 0x24a52a58  addiu       $a1, $a1, 0x2A58
    ctx->pc = 0x154dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10840));
    // 0x154dcc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154DCCu;
    SET_GPR_U32(ctx, 31, 0x154DD4u);
    ctx->pc = 0x154DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154DCCu;
            // 0x154dd0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DD4u; }
        if (ctx->pc != 0x154DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DD4u; }
        if (ctx->pc != 0x154DD4u) { return; }
    }
    ctx->pc = 0x154DD4u;
label_154dd4:
    // 0x154dd4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154DD4u;
    {
        const bool branch_taken_0x154dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154dd4) {
            ctx->pc = 0x154DE0u;
            goto label_154de0;
        }
    }
    ctx->pc = 0x154DDCu;
    // 0x154ddc: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x154ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_154de0:
    // 0x154de0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154de4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154de8: 0x24a52a60  addiu       $a1, $a1, 0x2A60
    ctx->pc = 0x154de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10848));
    // 0x154dec: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154DECu;
    SET_GPR_U32(ctx, 31, 0x154DF4u);
    ctx->pc = 0x154DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154DECu;
            // 0x154df0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DF4u; }
        if (ctx->pc != 0x154DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DF4u; }
        if (ctx->pc != 0x154DF4u) { return; }
    }
    ctx->pc = 0x154DF4u;
label_154df4:
    // 0x154df4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154DF4u;
    {
        const bool branch_taken_0x154df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154df4) {
            ctx->pc = 0x154E00u;
            goto label_154e00;
        }
    }
    ctx->pc = 0x154DFCu;
    // 0x154dfc: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x154dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_154e00:
    // 0x154e00: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154e04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e08: 0x24a52a68  addiu       $a1, $a1, 0x2A68
    ctx->pc = 0x154e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10856));
    // 0x154e0c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154E0Cu;
    SET_GPR_U32(ctx, 31, 0x154E14u);
    ctx->pc = 0x154E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E0Cu;
            // 0x154e10: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E14u; }
        if (ctx->pc != 0x154E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E14u; }
        if (ctx->pc != 0x154E14u) { return; }
    }
    ctx->pc = 0x154E14u;
label_154e14:
    // 0x154e14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154E14u;
    {
        const bool branch_taken_0x154e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154e14) {
            ctx->pc = 0x154E20u;
            goto label_154e20;
        }
    }
    ctx->pc = 0x154E1Cu;
    // 0x154e1c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_154e20:
    // 0x154e20: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154e24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e28: 0x24a52a70  addiu       $a1, $a1, 0x2A70
    ctx->pc = 0x154e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10864));
    // 0x154e2c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154E2Cu;
    SET_GPR_U32(ctx, 31, 0x154E34u);
    ctx->pc = 0x154E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E2Cu;
            // 0x154e30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E34u; }
        if (ctx->pc != 0x154E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E34u; }
        if (ctx->pc != 0x154E34u) { return; }
    }
    ctx->pc = 0x154E34u;
label_154e34:
    // 0x154e34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154E34u;
    {
        const bool branch_taken_0x154e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154e34) {
            ctx->pc = 0x154E40u;
            goto label_154e40;
        }
    }
    ctx->pc = 0x154E3Cu;
    // 0x154e3c: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_154e40:
    // 0x154e40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154e44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e48: 0x24a52a78  addiu       $a1, $a1, 0x2A78
    ctx->pc = 0x154e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10872));
    // 0x154e4c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154E4Cu;
    SET_GPR_U32(ctx, 31, 0x154E54u);
    ctx->pc = 0x154E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E4Cu;
            // 0x154e50: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E54u; }
        if (ctx->pc != 0x154E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E54u; }
        if (ctx->pc != 0x154E54u) { return; }
    }
    ctx->pc = 0x154E54u;
label_154e54:
    // 0x154e54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154E54u;
    {
        const bool branch_taken_0x154e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154e54) {
            ctx->pc = 0x154E60u;
            goto label_154e60;
        }
    }
    ctx->pc = 0x154E5Cu;
    // 0x154e5c: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x154e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_154e60:
    // 0x154e60: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x154E60u;
    {
        const bool branch_taken_0x154e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154E60u;
            // 0x154e64: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e60) {
            ctx->pc = 0x154E98u;
            goto label_154e98;
        }
    }
    ctx->pc = 0x154E68u;
    // 0x154e68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x154e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e70: 0xc0551dc  jal         func_154770
    ctx->pc = 0x154E70u;
    SET_GPR_U32(ctx, 31, 0x154E78u);
    ctx->pc = 0x154E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E70u;
            // 0x154e74: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154770u;
    if (runtime->hasFunction(0x154770u)) {
        auto targetFn = runtime->lookupFunction(0x154770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E78u; }
        if (ctx->pc != 0x154E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_value__6ClsMesFiPiPi_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E78u; }
        if (ctx->pc != 0x154E78u) { return; }
    }
    ctx->pc = 0x154E78u;
label_154e78:
    // 0x154e78: 0x2a01000a  slti        $at, $s0, 0xA
    ctx->pc = 0x154e78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x154e7c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x154E7Cu;
    {
        const bool branch_taken_0x154e7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154e7c) {
            ctx->pc = 0x154E8Cu;
            goto label_154e8c;
        }
    }
    ctx->pc = 0x154E84u;
    // 0x154e84: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x154E84u;
    {
        const bool branch_taken_0x154e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154E84u;
            // 0x154e88: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e84) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x154E8Cu;
label_154e8c:
    // 0x154e8c: 0x0  nop
    ctx->pc = 0x154e8cu;
    // NOP
    // 0x154e90: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x154E90u;
    {
        const bool branch_taken_0x154e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154E90u;
            // 0x154e94: 0x26b50003  addiu       $s5, $s5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e90) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x154E98u;
label_154e98:
    // 0x154e98: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154e9c: 0x2752021  addu        $a0, $s3, $s5
    ctx->pc = 0x154e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x154ea0: 0x24a52a80  addiu       $a1, $a1, 0x2A80
    ctx->pc = 0x154ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10880));
    // 0x154ea4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154EA4u;
    SET_GPR_U32(ctx, 31, 0x154EACu);
    ctx->pc = 0x154EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154EA4u;
            // 0x154ea8: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EACu; }
        if (ctx->pc != 0x154EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EACu; }
        if (ctx->pc != 0x154EACu) { return; }
    }
    ctx->pc = 0x154EACu;
label_154eac:
    // 0x154eac: 0x144000cc  bnez        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x154EACu;
    {
        const bool branch_taken_0x154eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154eac) {
            ctx->pc = 0x1551E0u;
            goto label_1551e0;
        }
    }
    ctx->pc = 0x154EB4u;
    // 0x154eb4: 0x26b50009  addiu       $s5, $s5, 0x9
    ctx->pc = 0x154eb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x154eb8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154ebc: 0x275b021  addu        $s6, $s3, $s5
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x154ec0: 0x24a529d8  addiu       $a1, $a1, 0x29D8
    ctx->pc = 0x154ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10712));
    // 0x154ec4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ec8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x154ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154ecc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154ECCu;
    SET_GPR_U32(ctx, 31, 0x154ED4u);
    ctx->pc = 0x154ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154ECCu;
            // 0x154ed0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154ED4u; }
        if (ctx->pc != 0x154ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154ED4u; }
        if (ctx->pc != 0x154ED4u) { return; }
    }
    ctx->pc = 0x154ED4u;
label_154ed4:
    // 0x154ed4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154ED4u;
    {
        const bool branch_taken_0x154ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154ED4u;
            // 0x154ed8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ed4) {
            ctx->pc = 0x154EF0u;
            goto label_154ef0;
        }
    }
    ctx->pc = 0x154EDCu;
    // 0x154edc: 0x3405fbfe  ori         $a1, $zero, 0xFBFE
    ctx->pc = 0x154edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64510);
    // 0x154ee0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ee4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x154ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ee8: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x154EE8u;
    SET_GPR_U32(ctx, 31, 0x154EF0u);
    ctx->pc = 0x154EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154EE8u;
            // 0x154eec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EF0u; }
        if (ctx->pc != 0x154EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EF0u; }
        if (ctx->pc != 0x154EF0u) { return; }
    }
    ctx->pc = 0x154EF0u;
label_154ef0:
    // 0x154ef0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154ef4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ef8: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x154ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x154efc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154EFCu;
    SET_GPR_U32(ctx, 31, 0x154F04u);
    ctx->pc = 0x154F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154EFCu;
            // 0x154f00: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F04u; }
        if (ctx->pc != 0x154F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F04u; }
        if (ctx->pc != 0x154F04u) { return; }
    }
    ctx->pc = 0x154F04u;
label_154f04:
    // 0x154f04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154F04u;
    {
        const bool branch_taken_0x154f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F04u;
            // 0x154f08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f04) {
            ctx->pc = 0x154F20u;
            goto label_154f20;
        }
    }
    ctx->pc = 0x154F0Cu;
    // 0x154f0c: 0x3405fbfd  ori         $a1, $zero, 0xFBFD
    ctx->pc = 0x154f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64509);
    // 0x154f10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x154f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f18: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x154F18u;
    SET_GPR_U32(ctx, 31, 0x154F20u);
    ctx->pc = 0x154F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154F18u;
            // 0x154f1c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F20u; }
        if (ctx->pc != 0x154F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F20u; }
        if (ctx->pc != 0x154F20u) { return; }
    }
    ctx->pc = 0x154F20u;
label_154f20:
    // 0x154f20: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154f24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f28: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x154f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
    // 0x154f2c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154F2Cu;
    SET_GPR_U32(ctx, 31, 0x154F34u);
    ctx->pc = 0x154F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154F2Cu;
            // 0x154f30: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F34u; }
        if (ctx->pc != 0x154F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F34u; }
        if (ctx->pc != 0x154F34u) { return; }
    }
    ctx->pc = 0x154F34u;
label_154f34:
    // 0x154f34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154F34u;
    {
        const bool branch_taken_0x154f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F34u;
            // 0x154f38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f34) {
            ctx->pc = 0x154F50u;
            goto label_154f50;
        }
    }
    ctx->pc = 0x154F3Cu;
    // 0x154f3c: 0x3405fbfc  ori         $a1, $zero, 0xFBFC
    ctx->pc = 0x154f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64508);
    // 0x154f40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x154f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f48: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x154F48u;
    SET_GPR_U32(ctx, 31, 0x154F50u);
    ctx->pc = 0x154F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154F48u;
            // 0x154f4c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F50u; }
        if (ctx->pc != 0x154F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F50u; }
        if (ctx->pc != 0x154F50u) { return; }
    }
    ctx->pc = 0x154F50u;
label_154f50:
    // 0x154f50: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154f54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f58: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x154f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x154f5c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154F5Cu;
    SET_GPR_U32(ctx, 31, 0x154F64u);
    ctx->pc = 0x154F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154F5Cu;
            // 0x154f60: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F64u; }
        if (ctx->pc != 0x154F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F64u; }
        if (ctx->pc != 0x154F64u) { return; }
    }
    ctx->pc = 0x154F64u;
label_154f64:
    // 0x154f64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154F64u;
    {
        const bool branch_taken_0x154f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F64u;
            // 0x154f68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f64) {
            ctx->pc = 0x154F80u;
            goto label_154f80;
        }
    }
    ctx->pc = 0x154F6Cu;
    // 0x154f6c: 0x3405fbfb  ori         $a1, $zero, 0xFBFB
    ctx->pc = 0x154f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64507);
    // 0x154f70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x154f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f78: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x154F78u;
    SET_GPR_U32(ctx, 31, 0x154F80u);
    ctx->pc = 0x154F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154F78u;
            // 0x154f7c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F80u; }
        if (ctx->pc != 0x154F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F80u; }
        if (ctx->pc != 0x154F80u) { return; }
    }
    ctx->pc = 0x154F80u;
label_154f80:
    // 0x154f80: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154f84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f88: 0x24a529f8  addiu       $a1, $a1, 0x29F8
    ctx->pc = 0x154f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    // 0x154f8c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154F8Cu;
    SET_GPR_U32(ctx, 31, 0x154F94u);
    ctx->pc = 0x154F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154F8Cu;
            // 0x154f90: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F94u; }
        if (ctx->pc != 0x154F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F94u; }
        if (ctx->pc != 0x154F94u) { return; }
    }
    ctx->pc = 0x154F94u;
label_154f94:
    // 0x154f94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154F94u;
    {
        const bool branch_taken_0x154f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F94u;
            // 0x154f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f94) {
            ctx->pc = 0x154FB0u;
            goto label_154fb0;
        }
    }
    ctx->pc = 0x154F9Cu;
    // 0x154f9c: 0x3405fbf2  ori         $a1, $zero, 0xFBF2
    ctx->pc = 0x154f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64498);
    // 0x154fa0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fa4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x154fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fa8: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x154FA8u;
    SET_GPR_U32(ctx, 31, 0x154FB0u);
    ctx->pc = 0x154FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154FA8u;
            // 0x154fac: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FB0u; }
        if (ctx->pc != 0x154FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FB0u; }
        if (ctx->pc != 0x154FB0u) { return; }
    }
    ctx->pc = 0x154FB0u;
label_154fb0:
    // 0x154fb0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154fb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fb8: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x154fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x154fbc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154FBCu;
    SET_GPR_U32(ctx, 31, 0x154FC4u);
    ctx->pc = 0x154FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154FBCu;
            // 0x154fc0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FC4u; }
        if (ctx->pc != 0x154FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FC4u; }
        if (ctx->pc != 0x154FC4u) { return; }
    }
    ctx->pc = 0x154FC4u;
label_154fc4:
    // 0x154fc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154FC4u;
    {
        const bool branch_taken_0x154fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154FC4u;
            // 0x154fc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fc4) {
            ctx->pc = 0x154FE0u;
            goto label_154fe0;
        }
    }
    ctx->pc = 0x154FCCu;
    // 0x154fcc: 0x3405fbf1  ori         $a1, $zero, 0xFBF1
    ctx->pc = 0x154fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64497);
    // 0x154fd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x154fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fd8: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x154FD8u;
    SET_GPR_U32(ctx, 31, 0x154FE0u);
    ctx->pc = 0x154FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154FD8u;
            // 0x154fdc: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FE0u; }
        if (ctx->pc != 0x154FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FE0u; }
        if (ctx->pc != 0x154FE0u) { return; }
    }
    ctx->pc = 0x154FE0u;
label_154fe0:
    // 0x154fe0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x154fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x154fe4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fe8: 0x24a52a08  addiu       $a1, $a1, 0x2A08
    ctx->pc = 0x154fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10760));
    // 0x154fec: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x154FECu;
    SET_GPR_U32(ctx, 31, 0x154FF4u);
    ctx->pc = 0x154FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154FECu;
            // 0x154ff0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FF4u; }
        if (ctx->pc != 0x154FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FF4u; }
        if (ctx->pc != 0x154FF4u) { return; }
    }
    ctx->pc = 0x154FF4u;
label_154ff4:
    // 0x154ff4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154FF4u;
    {
        const bool branch_taken_0x154ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154FF4u;
            // 0x154ff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ff4) {
            ctx->pc = 0x155010u;
            goto label_155010;
        }
    }
    ctx->pc = 0x154FFCu;
    // 0x154ffc: 0x3405fbf0  ori         $a1, $zero, 0xFBF0
    ctx->pc = 0x154ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64496);
    // 0x155000: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155004: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155008: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x155008u;
    SET_GPR_U32(ctx, 31, 0x155010u);
    ctx->pc = 0x15500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155008u;
            // 0x15500c: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155010u; }
        if (ctx->pc != 0x155010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155010u; }
        if (ctx->pc != 0x155010u) { return; }
    }
    ctx->pc = 0x155010u;
label_155010:
    // 0x155010: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x155014: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155018: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x155018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x15501c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15501Cu;
    SET_GPR_U32(ctx, 31, 0x155024u);
    ctx->pc = 0x155020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15501Cu;
            // 0x155020: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155024u; }
        if (ctx->pc != 0x155024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155024u; }
        if (ctx->pc != 0x155024u) { return; }
    }
    ctx->pc = 0x155024u;
label_155024:
    // 0x155024: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155024u;
    {
        const bool branch_taken_0x155024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155024u;
            // 0x155028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155024) {
            ctx->pc = 0x155040u;
            goto label_155040;
        }
    }
    ctx->pc = 0x15502Cu;
    // 0x15502c: 0x3405fbef  ori         $a1, $zero, 0xFBEF
    ctx->pc = 0x15502cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64495);
    // 0x155030: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155034: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155038: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x155038u;
    SET_GPR_U32(ctx, 31, 0x155040u);
    ctx->pc = 0x15503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155038u;
            // 0x15503c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155040u; }
        if (ctx->pc != 0x155040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155040u; }
        if (ctx->pc != 0x155040u) { return; }
    }
    ctx->pc = 0x155040u;
label_155040:
    // 0x155040: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x155044: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155048: 0x24a52a18  addiu       $a1, $a1, 0x2A18
    ctx->pc = 0x155048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10776));
    // 0x15504c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15504Cu;
    SET_GPR_U32(ctx, 31, 0x155054u);
    ctx->pc = 0x155050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15504Cu;
            // 0x155050: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155054u; }
        if (ctx->pc != 0x155054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155054u; }
        if (ctx->pc != 0x155054u) { return; }
    }
    ctx->pc = 0x155054u;
label_155054:
    // 0x155054: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155054u;
    {
        const bool branch_taken_0x155054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155054u;
            // 0x155058: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155054) {
            ctx->pc = 0x155070u;
            goto label_155070;
        }
    }
    ctx->pc = 0x15505Cu;
    // 0x15505c: 0x3405fbee  ori         $a1, $zero, 0xFBEE
    ctx->pc = 0x15505cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64494);
    // 0x155060: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155064: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155068: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x155068u;
    SET_GPR_U32(ctx, 31, 0x155070u);
    ctx->pc = 0x15506Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155068u;
            // 0x15506c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155070u; }
        if (ctx->pc != 0x155070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155070u; }
        if (ctx->pc != 0x155070u) { return; }
    }
    ctx->pc = 0x155070u;
label_155070:
    // 0x155070: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x155074: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155078: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x155078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x15507c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15507Cu;
    SET_GPR_U32(ctx, 31, 0x155084u);
    ctx->pc = 0x155080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15507Cu;
            // 0x155080: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155084u; }
        if (ctx->pc != 0x155084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155084u; }
        if (ctx->pc != 0x155084u) { return; }
    }
    ctx->pc = 0x155084u;
label_155084:
    // 0x155084: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155084u;
    {
        const bool branch_taken_0x155084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155084u;
            // 0x155088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155084) {
            ctx->pc = 0x1550A0u;
            goto label_1550a0;
        }
    }
    ctx->pc = 0x15508Cu;
    // 0x15508c: 0x3405fbed  ori         $a1, $zero, 0xFBED
    ctx->pc = 0x15508cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64493);
    // 0x155090: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155094: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155098: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x155098u;
    SET_GPR_U32(ctx, 31, 0x1550A0u);
    ctx->pc = 0x15509Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155098u;
            // 0x15509c: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550A0u; }
        if (ctx->pc != 0x1550A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550A0u; }
        if (ctx->pc != 0x1550A0u) { return; }
    }
    ctx->pc = 0x1550A0u;
label_1550a0:
    // 0x1550a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1550a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1550a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1550a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550a8: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x1550a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x1550ac: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1550ACu;
    SET_GPR_U32(ctx, 31, 0x1550B4u);
    ctx->pc = 0x1550B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1550ACu;
            // 0x1550b0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550B4u; }
        if (ctx->pc != 0x1550B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550B4u; }
        if (ctx->pc != 0x1550B4u) { return; }
    }
    ctx->pc = 0x1550B4u;
label_1550b4:
    // 0x1550b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1550B4u;
    {
        const bool branch_taken_0x1550b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1550B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1550B4u;
            // 0x1550b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550b4) {
            ctx->pc = 0x1550D0u;
            goto label_1550d0;
        }
    }
    ctx->pc = 0x1550BCu;
    // 0x1550bc: 0x3405fbec  ori         $a1, $zero, 0xFBEC
    ctx->pc = 0x1550bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64492);
    // 0x1550c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1550c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1550c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550c8: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x1550C8u;
    SET_GPR_U32(ctx, 31, 0x1550D0u);
    ctx->pc = 0x1550CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1550C8u;
            // 0x1550cc: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550D0u; }
        if (ctx->pc != 0x1550D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550D0u; }
        if (ctx->pc != 0x1550D0u) { return; }
    }
    ctx->pc = 0x1550D0u;
label_1550d0:
    // 0x1550d0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1550d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1550d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1550d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550d8: 0x24a52a98  addiu       $a1, $a1, 0x2A98
    ctx->pc = 0x1550d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10904));
    // 0x1550dc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1550DCu;
    SET_GPR_U32(ctx, 31, 0x1550E4u);
    ctx->pc = 0x1550E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1550DCu;
            // 0x1550e0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550E4u; }
        if (ctx->pc != 0x1550E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550E4u; }
        if (ctx->pc != 0x1550E4u) { return; }
    }
    ctx->pc = 0x1550E4u;
label_1550e4:
    // 0x1550e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1550E4u;
    {
        const bool branch_taken_0x1550e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1550E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1550E4u;
            // 0x1550e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550e4) {
            ctx->pc = 0x155100u;
            goto label_155100;
        }
    }
    ctx->pc = 0x1550ECu;
    // 0x1550ec: 0x3405fbeb  ori         $a1, $zero, 0xFBEB
    ctx->pc = 0x1550ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64491);
    // 0x1550f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1550f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1550f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550f8: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x1550F8u;
    SET_GPR_U32(ctx, 31, 0x155100u);
    ctx->pc = 0x1550FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1550F8u;
            // 0x1550fc: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155100u; }
        if (ctx->pc != 0x155100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155100u; }
        if (ctx->pc != 0x155100u) { return; }
    }
    ctx->pc = 0x155100u;
label_155100:
    // 0x155100: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x155104: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155108: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0
    ctx->pc = 0x155108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
    // 0x15510c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15510Cu;
    SET_GPR_U32(ctx, 31, 0x155114u);
    ctx->pc = 0x155110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15510Cu;
            // 0x155110: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155114u; }
        if (ctx->pc != 0x155114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155114u; }
        if (ctx->pc != 0x155114u) { return; }
    }
    ctx->pc = 0x155114u;
label_155114:
    // 0x155114: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155114u;
    {
        const bool branch_taken_0x155114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155114u;
            // 0x155118: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155114) {
            ctx->pc = 0x155130u;
            goto label_155130;
        }
    }
    ctx->pc = 0x15511Cu;
    // 0x15511c: 0x3405fbea  ori         $a1, $zero, 0xFBEA
    ctx->pc = 0x15511cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64490);
    // 0x155120: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155124: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155128: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x155128u;
    SET_GPR_U32(ctx, 31, 0x155130u);
    ctx->pc = 0x15512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155128u;
            // 0x15512c: 0x2410000d  addiu       $s0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155130u; }
        if (ctx->pc != 0x155130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155130u; }
        if (ctx->pc != 0x155130u) { return; }
    }
    ctx->pc = 0x155130u;
label_155130:
    // 0x155130: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x155134: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155138: 0x24a52aa8  addiu       $a1, $a1, 0x2AA8
    ctx->pc = 0x155138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10920));
    // 0x15513c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15513Cu;
    SET_GPR_U32(ctx, 31, 0x155144u);
    ctx->pc = 0x155140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15513Cu;
            // 0x155140: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155144u; }
        if (ctx->pc != 0x155144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155144u; }
        if (ctx->pc != 0x155144u) { return; }
    }
    ctx->pc = 0x155144u;
label_155144:
    // 0x155144: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155144u;
    {
        const bool branch_taken_0x155144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155144u;
            // 0x155148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155144) {
            ctx->pc = 0x155160u;
            goto label_155160;
        }
    }
    ctx->pc = 0x15514Cu;
    // 0x15514c: 0x3405fbe9  ori         $a1, $zero, 0xFBE9
    ctx->pc = 0x15514cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64489);
    // 0x155150: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155154: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155158: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x155158u;
    SET_GPR_U32(ctx, 31, 0x155160u);
    ctx->pc = 0x15515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155158u;
            // 0x15515c: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155160u; }
        if (ctx->pc != 0x155160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155160u; }
        if (ctx->pc != 0x155160u) { return; }
    }
    ctx->pc = 0x155160u;
label_155160:
    // 0x155160: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x155164: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155168: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0
    ctx->pc = 0x155168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
    // 0x15516c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15516Cu;
    SET_GPR_U32(ctx, 31, 0x155174u);
    ctx->pc = 0x155170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15516Cu;
            // 0x155170: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155174u; }
        if (ctx->pc != 0x155174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155174u; }
        if (ctx->pc != 0x155174u) { return; }
    }
    ctx->pc = 0x155174u;
label_155174:
    // 0x155174: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155174u;
    {
        const bool branch_taken_0x155174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155174u;
            // 0x155178: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155174) {
            ctx->pc = 0x155190u;
            goto label_155190;
        }
    }
    ctx->pc = 0x15517Cu;
    // 0x15517c: 0x3405fbe8  ori         $a1, $zero, 0xFBE8
    ctx->pc = 0x15517cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64488);
    // 0x155180: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155184: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155188: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x155188u;
    SET_GPR_U32(ctx, 31, 0x155190u);
    ctx->pc = 0x15518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155188u;
            // 0x15518c: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155190u; }
        if (ctx->pc != 0x155190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155190u; }
        if (ctx->pc != 0x155190u) { return; }
    }
    ctx->pc = 0x155190u;
label_155190:
    // 0x155190: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x155194: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155198: 0x24a52ab8  addiu       $a1, $a1, 0x2AB8
    ctx->pc = 0x155198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10936));
    // 0x15519c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15519Cu;
    SET_GPR_U32(ctx, 31, 0x1551A4u);
    ctx->pc = 0x1551A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15519Cu;
            // 0x1551a0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551A4u; }
        if (ctx->pc != 0x1551A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551A4u; }
        if (ctx->pc != 0x1551A4u) { return; }
    }
    ctx->pc = 0x1551A4u;
label_1551a4:
    // 0x1551a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1551A4u;
    {
        const bool branch_taken_0x1551a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1551A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551A4u;
            // 0x1551a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551a4) {
            ctx->pc = 0x1551C0u;
            goto label_1551c0;
        }
    }
    ctx->pc = 0x1551ACu;
    // 0x1551ac: 0x3405fbe7  ori         $a1, $zero, 0xFBE7
    ctx->pc = 0x1551acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64487);
    // 0x1551b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1551b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1551b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551b8: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x1551B8u;
    SET_GPR_U32(ctx, 31, 0x1551C0u);
    ctx->pc = 0x1551BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1551B8u;
            // 0x1551bc: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551C0u; }
        if (ctx->pc != 0x1551C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551C0u; }
        if (ctx->pc != 0x1551C0u) { return; }
    }
    ctx->pc = 0x1551C0u;
label_1551c0:
    // 0x1551c0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1551C0u;
    {
        const bool branch_taken_0x1551c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551C0u;
            // 0x1551c4: 0x2a01000a  slti        $at, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551c0) {
            ctx->pc = 0x1551E0u;
            goto label_1551e0;
        }
    }
    ctx->pc = 0x1551C8u;
    // 0x1551c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1551C8u;
    {
        const bool branch_taken_0x1551c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1551c8) {
            ctx->pc = 0x1551D8u;
            goto label_1551d8;
        }
    }
    ctx->pc = 0x1551D0u;
    // 0x1551d0: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x1551D0u;
    {
        const bool branch_taken_0x1551d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551D0u;
            // 0x1551d4: 0x26b50003  addiu       $s5, $s5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551d0) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x1551D8u;
label_1551d8:
    // 0x1551d8: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x1551D8u;
    {
        const bool branch_taken_0x1551d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551D8u;
            // 0x1551dc: 0x26b50005  addiu       $s5, $s5, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551d8) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x1551E0u;
label_1551e0:
    // 0x1551e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1551e4: 0x2752021  addu        $a0, $s3, $s5
    ctx->pc = 0x1551e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1551e8: 0x24a52ac0  addiu       $a1, $a1, 0x2AC0
    ctx->pc = 0x1551e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10944));
    // 0x1551ec: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1551ECu;
    SET_GPR_U32(ctx, 31, 0x1551F4u);
    ctx->pc = 0x1551F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1551ECu;
            // 0x1551f0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551F4u; }
        if (ctx->pc != 0x1551F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551F4u; }
        if (ctx->pc != 0x1551F4u) { return; }
    }
    ctx->pc = 0x1551F4u;
label_1551f4:
    // 0x1551f4: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1551F4u;
    {
        const bool branch_taken_0x1551f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1551f4) {
            ctx->pc = 0x155440u;
            goto label_155440;
        }
    }
    ctx->pc = 0x1551FCu;
    // 0x1551fc: 0x26b50007  addiu       $s5, $s5, 0x7
    ctx->pc = 0x1551fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
    // 0x155200: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x155204: 0x275b021  addu        $s6, $s3, $s5
    ctx->pc = 0x155204u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x155208: 0x24a529d8  addiu       $a1, $a1, 0x29D8
    ctx->pc = 0x155208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10712));
    // 0x15520c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155210: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x155210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x155214: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155214u;
    SET_GPR_U32(ctx, 31, 0x15521Cu);
    ctx->pc = 0x155218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155214u;
            // 0x155218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15521Cu; }
        if (ctx->pc != 0x15521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15521Cu; }
        if (ctx->pc != 0x15521Cu) { return; }
    }
    ctx->pc = 0x15521Cu;
label_15521c:
    // 0x15521c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15521Cu;
    {
        const bool branch_taken_0x15521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15521c) {
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x155224u;
    // 0x155224: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x155224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155228:
    // 0x155228: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15522c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15522cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155230: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x155234: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155234u;
    SET_GPR_U32(ctx, 31, 0x15523Cu);
    ctx->pc = 0x155238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155234u;
            // 0x155238: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15523Cu; }
        if (ctx->pc != 0x15523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15523Cu; }
        if (ctx->pc != 0x15523Cu) { return; }
    }
    ctx->pc = 0x15523Cu;
label_15523c:
    // 0x15523c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15523Cu;
    {
        const bool branch_taken_0x15523c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15523c) {
            ctx->pc = 0x155248u;
            goto label_155248;
        }
    }
    ctx->pc = 0x155244u;
    // 0x155244: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x155244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155248:
    // 0x155248: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15524c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155250: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
    // 0x155254: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155254u;
    SET_GPR_U32(ctx, 31, 0x15525Cu);
    ctx->pc = 0x155258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155254u;
            // 0x155258: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15525Cu; }
        if (ctx->pc != 0x15525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15525Cu; }
        if (ctx->pc != 0x15525Cu) { return; }
    }
    ctx->pc = 0x15525Cu;
label_15525c:
    // 0x15525c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15525Cu;
    {
        const bool branch_taken_0x15525c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15525c) {
            ctx->pc = 0x155268u;
            goto label_155268;
        }
    }
    ctx->pc = 0x155264u;
    // 0x155264: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x155264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_155268:
    // 0x155268: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15526c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15526cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155270: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x155270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x155274: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155274u;
    SET_GPR_U32(ctx, 31, 0x15527Cu);
    ctx->pc = 0x155278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155274u;
            // 0x155278: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15527Cu; }
        if (ctx->pc != 0x15527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15527Cu; }
        if (ctx->pc != 0x15527Cu) { return; }
    }
    ctx->pc = 0x15527Cu;
label_15527c:
    // 0x15527c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15527Cu;
    {
        const bool branch_taken_0x15527c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15527c) {
            ctx->pc = 0x155288u;
            goto label_155288;
        }
    }
    ctx->pc = 0x155284u;
    // 0x155284: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x155284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_155288:
    // 0x155288: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15528c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155290: 0x24a529f8  addiu       $a1, $a1, 0x29F8
    ctx->pc = 0x155290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    // 0x155294: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155294u;
    SET_GPR_U32(ctx, 31, 0x15529Cu);
    ctx->pc = 0x155298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155294u;
            // 0x155298: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15529Cu; }
        if (ctx->pc != 0x15529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15529Cu; }
        if (ctx->pc != 0x15529Cu) { return; }
    }
    ctx->pc = 0x15529Cu;
label_15529c:
    // 0x15529c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15529Cu;
    {
        const bool branch_taken_0x15529c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15529c) {
            ctx->pc = 0x1552A8u;
            goto label_1552a8;
        }
    }
    ctx->pc = 0x1552A4u;
    // 0x1552a4: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x1552a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1552a8:
    // 0x1552a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1552a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1552ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1552acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552b0: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x1552b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x1552b4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1552B4u;
    SET_GPR_U32(ctx, 31, 0x1552BCu);
    ctx->pc = 0x1552B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1552B4u;
            // 0x1552b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552BCu; }
        if (ctx->pc != 0x1552BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552BCu; }
        if (ctx->pc != 0x1552BCu) { return; }
    }
    ctx->pc = 0x1552BCu;
label_1552bc:
    // 0x1552bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1552BCu;
    {
        const bool branch_taken_0x1552bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1552bc) {
            ctx->pc = 0x1552C8u;
            goto label_1552c8;
        }
    }
    ctx->pc = 0x1552C4u;
    // 0x1552c4: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1552c8:
    // 0x1552c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1552cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1552ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552d0: 0x24a52a08  addiu       $a1, $a1, 0x2A08
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10760));
    // 0x1552d4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1552D4u;
    SET_GPR_U32(ctx, 31, 0x1552DCu);
    ctx->pc = 0x1552D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1552D4u;
            // 0x1552d8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552DCu; }
        if (ctx->pc != 0x1552DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552DCu; }
        if (ctx->pc != 0x1552DCu) { return; }
    }
    ctx->pc = 0x1552DCu;
label_1552dc:
    // 0x1552dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1552DCu;
    {
        const bool branch_taken_0x1552dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1552dc) {
            ctx->pc = 0x1552E8u;
            goto label_1552e8;
        }
    }
    ctx->pc = 0x1552E4u;
    // 0x1552e4: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1552e8:
    // 0x1552e8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1552ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1552ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552f0: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x1552f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x1552f4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1552F4u;
    SET_GPR_U32(ctx, 31, 0x1552FCu);
    ctx->pc = 0x1552F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1552F4u;
            // 0x1552f8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552FCu; }
        if (ctx->pc != 0x1552FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552FCu; }
        if (ctx->pc != 0x1552FCu) { return; }
    }
    ctx->pc = 0x1552FCu;
label_1552fc:
    // 0x1552fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1552FCu;
    {
        const bool branch_taken_0x1552fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1552fc) {
            ctx->pc = 0x155308u;
            goto label_155308;
        }
    }
    ctx->pc = 0x155304u;
    // 0x155304: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x155304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_155308:
    // 0x155308: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15530c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155310: 0x24a52a18  addiu       $a1, $a1, 0x2A18
    ctx->pc = 0x155310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10776));
    // 0x155314: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155314u;
    SET_GPR_U32(ctx, 31, 0x15531Cu);
    ctx->pc = 0x155318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155314u;
            // 0x155318: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15531Cu; }
        if (ctx->pc != 0x15531Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15531Cu; }
        if (ctx->pc != 0x15531Cu) { return; }
    }
    ctx->pc = 0x15531Cu;
label_15531c:
    // 0x15531c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15531Cu;
    {
        const bool branch_taken_0x15531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15531c) {
            ctx->pc = 0x155328u;
            goto label_155328;
        }
    }
    ctx->pc = 0x155324u;
    // 0x155324: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x155324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_155328:
    // 0x155328: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15532c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155330: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x155330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x155334: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155334u;
    SET_GPR_U32(ctx, 31, 0x15533Cu);
    ctx->pc = 0x155338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155334u;
            // 0x155338: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15533Cu; }
        if (ctx->pc != 0x15533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15533Cu; }
        if (ctx->pc != 0x15533Cu) { return; }
    }
    ctx->pc = 0x15533Cu;
label_15533c:
    // 0x15533c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15533Cu;
    {
        const bool branch_taken_0x15533c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15533c) {
            ctx->pc = 0x155348u;
            goto label_155348;
        }
    }
    ctx->pc = 0x155344u;
    // 0x155344: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x155344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_155348:
    // 0x155348: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15534c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155350: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x155350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x155354: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155354u;
    SET_GPR_U32(ctx, 31, 0x15535Cu);
    ctx->pc = 0x155358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155354u;
            // 0x155358: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15535Cu; }
        if (ctx->pc != 0x15535Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15535Cu; }
        if (ctx->pc != 0x15535Cu) { return; }
    }
    ctx->pc = 0x15535Cu;
label_15535c:
    // 0x15535c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15535Cu;
    {
        const bool branch_taken_0x15535c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15535c) {
            ctx->pc = 0x155368u;
            goto label_155368;
        }
    }
    ctx->pc = 0x155364u;
    // 0x155364: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x155364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_155368:
    // 0x155368: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15536c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15536cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155370: 0x24a52a98  addiu       $a1, $a1, 0x2A98
    ctx->pc = 0x155370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10904));
    // 0x155374: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155374u;
    SET_GPR_U32(ctx, 31, 0x15537Cu);
    ctx->pc = 0x155378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155374u;
            // 0x155378: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15537Cu; }
        if (ctx->pc != 0x15537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15537Cu; }
        if (ctx->pc != 0x15537Cu) { return; }
    }
    ctx->pc = 0x15537Cu;
label_15537c:
    // 0x15537c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15537Cu;
    {
        const bool branch_taken_0x15537c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15537c) {
            ctx->pc = 0x155388u;
            goto label_155388;
        }
    }
    ctx->pc = 0x155384u;
    // 0x155384: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x155384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_155388:
    // 0x155388: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x155388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15538c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155390: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0
    ctx->pc = 0x155390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
    // 0x155394: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x155394u;
    SET_GPR_U32(ctx, 31, 0x15539Cu);
    ctx->pc = 0x155398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155394u;
            // 0x155398: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15539Cu; }
        if (ctx->pc != 0x15539Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15539Cu; }
        if (ctx->pc != 0x15539Cu) { return; }
    }
    ctx->pc = 0x15539Cu;
label_15539c:
    // 0x15539c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15539Cu;
    {
        const bool branch_taken_0x15539c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15539c) {
            ctx->pc = 0x1553A8u;
            goto label_1553a8;
        }
    }
    ctx->pc = 0x1553A4u;
    // 0x1553a4: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x1553a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1553a8:
    // 0x1553a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1553a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1553ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1553acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553b0: 0x24a52aa8  addiu       $a1, $a1, 0x2AA8
    ctx->pc = 0x1553b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10920));
    // 0x1553b4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1553B4u;
    SET_GPR_U32(ctx, 31, 0x1553BCu);
    ctx->pc = 0x1553B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1553B4u;
            // 0x1553b8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553BCu; }
        if (ctx->pc != 0x1553BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553BCu; }
        if (ctx->pc != 0x1553BCu) { return; }
    }
    ctx->pc = 0x1553BCu;
label_1553bc:
    // 0x1553bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1553BCu;
    {
        const bool branch_taken_0x1553bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1553bc) {
            ctx->pc = 0x1553C8u;
            goto label_1553c8;
        }
    }
    ctx->pc = 0x1553C4u;
    // 0x1553c4: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x1553c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1553c8:
    // 0x1553c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1553c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1553cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1553ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553d0: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0
    ctx->pc = 0x1553d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
    // 0x1553d4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1553D4u;
    SET_GPR_U32(ctx, 31, 0x1553DCu);
    ctx->pc = 0x1553D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1553D4u;
            // 0x1553d8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553DCu; }
        if (ctx->pc != 0x1553DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553DCu; }
        if (ctx->pc != 0x1553DCu) { return; }
    }
    ctx->pc = 0x1553DCu;
label_1553dc:
    // 0x1553dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1553DCu;
    {
        const bool branch_taken_0x1553dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1553dc) {
            ctx->pc = 0x1553E8u;
            goto label_1553e8;
        }
    }
    ctx->pc = 0x1553E4u;
    // 0x1553e4: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x1553e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1553e8:
    // 0x1553e8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1553e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1553ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1553ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553f0: 0x24a52ab8  addiu       $a1, $a1, 0x2AB8
    ctx->pc = 0x1553f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10936));
    // 0x1553f4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1553F4u;
    SET_GPR_U32(ctx, 31, 0x1553FCu);
    ctx->pc = 0x1553F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1553F4u;
            // 0x1553f8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553FCu; }
        if (ctx->pc != 0x1553FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553FCu; }
        if (ctx->pc != 0x1553FCu) { return; }
    }
    ctx->pc = 0x1553FCu;
label_1553fc:
    // 0x1553fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1553FCu;
    {
        const bool branch_taken_0x1553fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1553fc) {
            ctx->pc = 0x155408u;
            goto label_155408;
        }
    }
    ctx->pc = 0x155404u;
    // 0x155404: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x155404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_155408:
    // 0x155408: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x155408u;
    {
        const bool branch_taken_0x155408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155408u;
            // 0x15540c: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155408) {
            ctx->pc = 0x155440u;
            goto label_155440;
        }
    }
    ctx->pc = 0x155410u;
    // 0x155410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155414: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155418: 0xc0555ac  jal         func_1556B0
    ctx->pc = 0x155418u;
    SET_GPR_U32(ctx, 31, 0x155420u);
    ctx->pc = 0x15541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155418u;
            // 0x15541c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556B0u;
    if (runtime->hasFunction(0x1556B0u)) {
        auto targetFn = runtime->lookupFunction(0x1556B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155420u; }
        if (ctx->pc != 0x155420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_str__6ClsMesFiPiPi_0x1556b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155420u; }
        if (ctx->pc != 0x155420u) { return; }
    }
    ctx->pc = 0x155420u;
label_155420:
    // 0x155420: 0x2a01000a  slti        $at, $s0, 0xA
    ctx->pc = 0x155420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x155424: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x155424u;
    {
        const bool branch_taken_0x155424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155424) {
            ctx->pc = 0x155434u;
            goto label_155434;
        }
    }
    ctx->pc = 0x15542Cu;
    // 0x15542c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x15542Cu;
    {
        const bool branch_taken_0x15542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15542Cu;
            // 0x155430: 0x26b50003  addiu       $s5, $s5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15542c) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x155434u;
label_155434:
    // 0x155434: 0x0  nop
    ctx->pc = 0x155434u;
    // NOP
    // 0x155438: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x155438u;
    {
        const bool branch_taken_0x155438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155438u;
            // 0x15543c: 0x26b50005  addiu       $s5, $s5, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155438) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x155440u;
label_155440:
    // 0x155440: 0x2758021  addu        $s0, $s3, $s5
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x155444: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155448: 0xc0b519c  jal         func_2D4670
    ctx->pc = 0x155448u;
    SET_GPR_U32(ctx, 31, 0x155450u);
    ctx->pc = 0x15544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155448u;
            // 0x15544c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4670u;
    if (runtime->hasFunction(0x2D4670u)) {
        auto targetFn = runtime->lookupFunction(0x2D4670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155450u; }
        if (ctx->pc != 0x155450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiFontNo__5CFontFPc_0x2d4670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155450u; }
        if (ctx->pc != 0x155450u) { return; }
    }
    ctx->pc = 0x155450u;
label_155450:
    // 0x155450: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x155450u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x155454: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x155454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x155458: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x155458u;
    {
        const bool branch_taken_0x155458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155458) {
            ctx->pc = 0x1554A8u;
            goto label_1554a8;
        }
    }
    ctx->pc = 0x155460u;
    // 0x155460: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155464: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155468: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x155468u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15546c: 0xc055834  jal         func_1560D0
    ctx->pc = 0x15546Cu;
    SET_GPR_U32(ctx, 31, 0x155474u);
    ctx->pc = 0x155470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15546Cu;
            // 0x155470: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155474u; }
        if (ctx->pc != 0x155474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155474u; }
        if (ctx->pc != 0x155474u) { return; }
    }
    ctx->pc = 0x155474u;
label_155474:
    // 0x155474: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155478: 0xc054834  jal         func_1520D0
    ctx->pc = 0x155478u;
    SET_GPR_U32(ctx, 31, 0x155480u);
    ctx->pc = 0x15547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155478u;
            // 0x15547c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1520D0u;
    if (runtime->hasFunction(0x1520D0u)) {
        auto targetFn = runtime->lookupFunction(0x1520D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155480u; }
        if (ctx->pc != 0x155480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__6ClsMesFi_0x1520d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155480u; }
        if (ctx->pc != 0x155480u) { return; }
    }
    ctx->pc = 0x155480u;
label_155480:
    // 0x155480: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x155480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x155484: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x155484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155488: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x155488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15548c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15548cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155498: 0xc0b51b0  jal         func_2D46C0
    ctx->pc = 0x155498u;
    SET_GPR_U32(ctx, 31, 0x1554A0u);
    ctx->pc = 0x15549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155498u;
            // 0x15549c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D46C0u;
    if (runtime->hasFunction(0x2D46C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D46C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554A0u; }
        if (ctx->pc != 0x1554A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiLen__5CFontFi_0x2d46c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554A0u; }
        if (ctx->pc != 0x1554A0u) { return; }
    }
    ctx->pc = 0x1554A0u;
label_1554a0:
    // 0x1554a0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1554A0u;
    {
        const bool branch_taken_0x1554a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554A0u;
            // 0x1554a4: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554a0) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x1554A8u;
label_1554a8:
    // 0x1554a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1554ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1554acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1554b0: 0x24a52ac8  addiu       $a1, $a1, 0x2AC8
    ctx->pc = 0x1554b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10952));
    // 0x1554b4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1554B4u;
    SET_GPR_U32(ctx, 31, 0x1554BCu);
    ctx->pc = 0x1554B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1554B4u;
            // 0x1554b8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554BCu; }
        if (ctx->pc != 0x1554BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554BCu; }
        if (ctx->pc != 0x1554BCu) { return; }
    }
    ctx->pc = 0x1554BCu;
label_1554bc:
    // 0x1554bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1554BCu;
    {
        const bool branch_taken_0x1554bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1554bc) {
            ctx->pc = 0x1554E8u;
            goto label_1554e8;
        }
    }
    ctx->pc = 0x1554C4u;
    // 0x1554c4: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1554c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1554c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1554cc: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x1554ccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1554d0: 0xc055834  jal         func_1560D0
    ctx->pc = 0x1554D0u;
    SET_GPR_U32(ctx, 31, 0x1554D8u);
    ctx->pc = 0x1554D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1554D0u;
            // 0x1554d4: 0x3405ff03  ori         $a1, $zero, 0xFF03 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65283);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554D8u; }
        if (ctx->pc != 0x1554D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554D8u; }
        if (ctx->pc != 0x1554D8u) { return; }
    }
    ctx->pc = 0x1554D8u;
label_1554d8:
    // 0x1554d8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1554d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1554dc: 0x26b50006  addiu       $s5, $s5, 0x6
    ctx->pc = 0x1554dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x1554e0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1554E0u;
    {
        const bool branch_taken_0x1554e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554E0u;
            // 0x1554e4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554e0) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x1554E8u;
label_1554e8:
    // 0x1554e8: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1554ec: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x1554ECu;
    SET_GPR_U32(ctx, 31, 0x1554F4u);
    ctx->pc = 0x1554F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1554ECu;
            // 0x1554f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554F4u; }
        if (ctx->pc != 0x1554F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554F4u; }
        if (ctx->pc != 0x1554F4u) { return; }
    }
    ctx->pc = 0x1554F4u;
label_1554f4:
    // 0x1554f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1554f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1554f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1554fc: 0x16c2000d  bne         $s6, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1554FCu;
    {
        const bool branch_taken_0x1554fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1554fc) {
            ctx->pc = 0x155534u;
            goto label_155534;
        }
    }
    ctx->pc = 0x155504u;
    // 0x155504: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x155504u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15550c: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x15550cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155510: 0xc055834  jal         func_1560D0
    ctx->pc = 0x155510u;
    SET_GPR_U32(ctx, 31, 0x155518u);
    ctx->pc = 0x155514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155510u;
            // 0x155514: 0x3405ff00  ori         $a1, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155518u; }
        if (ctx->pc != 0x155518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155518u; }
        if (ctx->pc != 0x155518u) { return; }
    }
    ctx->pc = 0x155518u;
label_155518:
    // 0x155518: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x155518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x15551c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15551cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x155520: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155524: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x155524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x155528: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x155528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15552c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x15552Cu;
    {
        const bool branch_taken_0x15552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15552Cu;
            // 0x155530: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15552c) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x155534u;
label_155534:
    // 0x155534: 0x0  nop
    ctx->pc = 0x155534u;
    // NOP
    // 0x155538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15553c: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x15553Cu;
    SET_GPR_U32(ctx, 31, 0x155544u);
    ctx->pc = 0x155540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15553Cu;
            // 0x155540: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155544u; }
        if (ctx->pc != 0x155544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155544u; }
        if (ctx->pc != 0x155544u) { return; }
    }
    ctx->pc = 0x155544u;
label_155544:
    // 0x155544: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x155544u;
    {
        const bool branch_taken_0x155544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155544) {
            ctx->pc = 0x1555C0u;
            goto label_1555c0;
        }
    }
    ctx->pc = 0x15554Cu;
    // 0x15554c: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x15554cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155550: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155554: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x155554u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155558: 0xc055834  jal         func_1560D0
    ctx->pc = 0x155558u;
    SET_GPR_U32(ctx, 31, 0x155560u);
    ctx->pc = 0x15555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155558u;
            // 0x15555c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155560u; }
        if (ctx->pc != 0x155560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155560u; }
        if (ctx->pc != 0x155560u) { return; }
    }
    ctx->pc = 0x155560u;
label_155560:
    // 0x155560: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155564: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x155564u;
    SET_GPR_U32(ctx, 31, 0x15556Cu);
    ctx->pc = 0x155568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155564u;
            // 0x155568: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15556Cu; }
        if (ctx->pc != 0x15556Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15556Cu; }
        if (ctx->pc != 0x15556Cu) { return; }
    }
    ctx->pc = 0x15556Cu;
label_15556c:
    // 0x15556c: 0x16c2000a  bne         $s6, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15556Cu;
    {
        const bool branch_taken_0x15556c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x15556c) {
            ctx->pc = 0x155598u;
            goto label_155598;
        }
    }
    ctx->pc = 0x155574u;
    // 0x155574: 0x8e8300c0  lw          $v1, 0xC0($s4)
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x155578: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155578u;
    {
        const bool branch_taken_0x155578 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155578u;
            // 0x15557c: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155578) {
            ctx->pc = 0x155588u;
            goto label_155588;
        }
    }
    ctx->pc = 0x155580u;
    // 0x155580: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155584: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x155584u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_155588:
    // 0x155588: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x155588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15558c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155590: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x155590u;
    {
        const bool branch_taken_0x155590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155590u;
            // 0x155594: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155590) {
            ctx->pc = 0x1555B8u;
            goto label_1555b8;
        }
    }
    ctx->pc = 0x155598u;
label_155598:
    // 0x155598: 0xc68100c0  lwc1        $f1, 0xC0($s4)
    ctx->pc = 0x155598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15559c: 0xc68000c8  lwc1        $f0, 0xC8($s4)
    ctx->pc = 0x15559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1555a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1555a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1555a4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1555A4u;
    SET_GPR_U32(ctx, 31, 0x1555ACu);
    ctx->pc = 0x1555A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1555A4u;
            // 0x1555a8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555ACu; }
        if (ctx->pc != 0x1555ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555ACu; }
        if (ctx->pc != 0x1555ACu) { return; }
    }
    ctx->pc = 0x1555ACu;
label_1555ac:
    // 0x1555ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1555b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1555b4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1555b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1555b8:
    // 0x1555b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1555B8u;
    {
        const bool branch_taken_0x1555b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555B8u;
            // 0x1555bc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555b8) {
            ctx->pc = 0x15566Cu;
            goto label_15566c;
        }
    }
    ctx->pc = 0x1555C0u;
label_1555c0:
    // 0x1555c0: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1555C0u;
    SET_GPR_U32(ctx, 31, 0x1555C8u);
    ctx->pc = 0x1555C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1555C0u;
            // 0x1555c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555C8u; }
        if (ctx->pc != 0x1555C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555C8u; }
        if (ctx->pc != 0x1555C8u) { return; }
    }
    ctx->pc = 0x1555C8u;
label_1555c8:
    // 0x1555c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1555c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1555ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1555d0: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1555D0u;
    {
        const bool branch_taken_0x1555d0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1555D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555D0u;
            // 0x1555d4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555d0) {
            ctx->pc = 0x1555E4u;
            goto label_1555e4;
        }
    }
    ctx->pc = 0x1555D8u;
    // 0x1555d8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1555D8u;
    SET_GPR_U32(ctx, 31, 0x1555E0u);
    ctx->pc = 0x1555DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1555D8u;
            // 0x1555dc: 0x24842ad0  addiu       $a0, $a0, 0x2AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555E0u; }
        if (ctx->pc != 0x1555E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555E0u; }
        if (ctx->pc != 0x1555E0u) { return; }
    }
    ctx->pc = 0x1555E0u;
label_1555e0:
    // 0x1555e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1555e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1555e4:
    // 0x1555e4: 0x0  nop
    ctx->pc = 0x1555e4u;
    // NOP
    // 0x1555e8: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1555ec: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x1555ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1555f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1555f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555f4: 0xc055834  jal         func_1560D0
    ctx->pc = 0x1555F4u;
    SET_GPR_U32(ctx, 31, 0x1555FCu);
    ctx->pc = 0x1555F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1555F4u;
            // 0x1555f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555FCu; }
        if (ctx->pc != 0x1555FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555FCu; }
        if (ctx->pc != 0x1555FCu) { return; }
    }
    ctx->pc = 0x1555FCu;
label_1555fc:
    // 0x1555fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1555fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155600: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x155600u;
    SET_GPR_U32(ctx, 31, 0x155608u);
    ctx->pc = 0x155604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155600u;
            // 0x155604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155608u; }
        if (ctx->pc != 0x155608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155608u; }
        if (ctx->pc != 0x155608u) { return; }
    }
    ctx->pc = 0x155608u;
label_155608:
    // 0x155608: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155608u;
    {
        const bool branch_taken_0x155608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155608) {
            ctx->pc = 0x155624u;
            goto label_155624;
        }
    }
    ctx->pc = 0x155610u;
    // 0x155610: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155614: 0x8e8300c0  lw          $v1, 0xC0($s4)
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x155618: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x155618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15561c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15561Cu;
    {
        const bool branch_taken_0x15561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15561Cu;
            // 0x155620: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15561c) {
            ctx->pc = 0x155668u;
            goto label_155668;
        }
    }
    ctx->pc = 0x155624u;
label_155624:
    // 0x155624: 0x0  nop
    ctx->pc = 0x155624u;
    // NOP
    // 0x155628: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x155628u;
    SET_GPR_U32(ctx, 31, 0x155630u);
    ctx->pc = 0x15562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155628u;
            // 0x15562c: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155630u; }
        if (ctx->pc != 0x155630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155630u; }
        if (ctx->pc != 0x155630u) { return; }
    }
    ctx->pc = 0x155630u;
label_155630:
    // 0x155630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155634: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x155634u;
    SET_GPR_U32(ctx, 31, 0x15563Cu);
    ctx->pc = 0x155638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155634u;
            // 0x155638: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15563Cu; }
        if (ctx->pc != 0x15563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15563Cu; }
        if (ctx->pc != 0x15563Cu) { return; }
    }
    ctx->pc = 0x15563Cu;
label_15563c:
    // 0x15563c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15563Cu;
    {
        const bool branch_taken_0x15563c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15563c) {
            ctx->pc = 0x155658u;
            goto label_155658;
        }
    }
    ctx->pc = 0x155644u;
    // 0x155644: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x155644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155648: 0x8e8300c0  lw          $v1, 0xC0($s4)
    ctx->pc = 0x155648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x15564c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x155650: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155650u;
    {
        const bool branch_taken_0x155650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155650u;
            // 0x155654: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155650) {
            ctx->pc = 0x155668u;
            goto label_155668;
        }
    }
    ctx->pc = 0x155658u;
label_155658:
    // 0x155658: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15565c: 0x8e8300c0  lw          $v1, 0xC0($s4)
    ctx->pc = 0x15565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x155660: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x155660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x155664: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x155664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_155668:
    // 0x155668: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_15566c:
    // 0x15566c: 0x0  nop
    ctx->pc = 0x15566cu;
    // NOP
    // 0x155670: 0x2b7182a  slt         $v1, $s5, $s7
    ctx->pc = 0x155670u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x155674: 0x1460fd23  bnez        $v1, . + 4 + (-0x2DD << 2)
    ctx->pc = 0x155674u;
    {
        const bool branch_taken_0x155674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155674u;
            // 0x155678: 0x2758021  addu        $s0, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155674) {
            ctx->pc = 0x154B04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154b04;
        }
    }
    ctx->pc = 0x15567Cu;
label_15567c:
    // 0x15567c: 0x0  nop
    ctx->pc = 0x15567cu;
    // NOP
    // 0x155680: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x155680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155684: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x155684u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155688: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x155688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15568c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15568cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155690: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15569c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15569cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1556a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1556a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1556a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1556A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1556A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556A4u;
            // 0x1556a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1556ACu;
}
