#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: End__13mgCMDTBuilderFP8mgCFrameP12mgCVisualMDTP10mgLoadData
// Address: 0x133c10 - 0x133d90
void End__13mgCMDTBuilderFP8mgCFrameP12mgCVisualMDTP10mgLoadData_0x133c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End__13mgCMDTBuilderFP8mgCFrameP12mgCVisualMDTP10mgLoadData_0x133c10");
#endif

    switch (ctx->pc) {
        case 0x133c10u: goto label_133c10;
        case 0x133c14u: goto label_133c14;
        case 0x133c18u: goto label_133c18;
        case 0x133c1cu: goto label_133c1c;
        case 0x133c20u: goto label_133c20;
        case 0x133c24u: goto label_133c24;
        case 0x133c28u: goto label_133c28;
        case 0x133c2cu: goto label_133c2c;
        case 0x133c30u: goto label_133c30;
        case 0x133c34u: goto label_133c34;
        case 0x133c38u: goto label_133c38;
        case 0x133c3cu: goto label_133c3c;
        case 0x133c40u: goto label_133c40;
        case 0x133c44u: goto label_133c44;
        case 0x133c48u: goto label_133c48;
        case 0x133c4cu: goto label_133c4c;
        case 0x133c50u: goto label_133c50;
        case 0x133c54u: goto label_133c54;
        case 0x133c58u: goto label_133c58;
        case 0x133c5cu: goto label_133c5c;
        case 0x133c60u: goto label_133c60;
        case 0x133c64u: goto label_133c64;
        case 0x133c68u: goto label_133c68;
        case 0x133c6cu: goto label_133c6c;
        case 0x133c70u: goto label_133c70;
        case 0x133c74u: goto label_133c74;
        case 0x133c78u: goto label_133c78;
        case 0x133c7cu: goto label_133c7c;
        case 0x133c80u: goto label_133c80;
        case 0x133c84u: goto label_133c84;
        case 0x133c88u: goto label_133c88;
        case 0x133c8cu: goto label_133c8c;
        case 0x133c90u: goto label_133c90;
        case 0x133c94u: goto label_133c94;
        case 0x133c98u: goto label_133c98;
        case 0x133c9cu: goto label_133c9c;
        case 0x133ca0u: goto label_133ca0;
        case 0x133ca4u: goto label_133ca4;
        case 0x133ca8u: goto label_133ca8;
        case 0x133cacu: goto label_133cac;
        case 0x133cb0u: goto label_133cb0;
        case 0x133cb4u: goto label_133cb4;
        case 0x133cb8u: goto label_133cb8;
        case 0x133cbcu: goto label_133cbc;
        case 0x133cc0u: goto label_133cc0;
        case 0x133cc4u: goto label_133cc4;
        case 0x133cc8u: goto label_133cc8;
        case 0x133cccu: goto label_133ccc;
        case 0x133cd0u: goto label_133cd0;
        case 0x133cd4u: goto label_133cd4;
        case 0x133cd8u: goto label_133cd8;
        case 0x133cdcu: goto label_133cdc;
        case 0x133ce0u: goto label_133ce0;
        case 0x133ce4u: goto label_133ce4;
        case 0x133ce8u: goto label_133ce8;
        case 0x133cecu: goto label_133cec;
        case 0x133cf0u: goto label_133cf0;
        case 0x133cf4u: goto label_133cf4;
        case 0x133cf8u: goto label_133cf8;
        case 0x133cfcu: goto label_133cfc;
        case 0x133d00u: goto label_133d00;
        case 0x133d04u: goto label_133d04;
        case 0x133d08u: goto label_133d08;
        case 0x133d0cu: goto label_133d0c;
        case 0x133d10u: goto label_133d10;
        case 0x133d14u: goto label_133d14;
        case 0x133d18u: goto label_133d18;
        case 0x133d1cu: goto label_133d1c;
        case 0x133d20u: goto label_133d20;
        case 0x133d24u: goto label_133d24;
        case 0x133d28u: goto label_133d28;
        case 0x133d2cu: goto label_133d2c;
        case 0x133d30u: goto label_133d30;
        case 0x133d34u: goto label_133d34;
        case 0x133d38u: goto label_133d38;
        case 0x133d3cu: goto label_133d3c;
        case 0x133d40u: goto label_133d40;
        case 0x133d44u: goto label_133d44;
        case 0x133d48u: goto label_133d48;
        case 0x133d4cu: goto label_133d4c;
        case 0x133d50u: goto label_133d50;
        case 0x133d54u: goto label_133d54;
        case 0x133d58u: goto label_133d58;
        case 0x133d5cu: goto label_133d5c;
        case 0x133d60u: goto label_133d60;
        case 0x133d64u: goto label_133d64;
        case 0x133d68u: goto label_133d68;
        case 0x133d6cu: goto label_133d6c;
        case 0x133d70u: goto label_133d70;
        case 0x133d74u: goto label_133d74;
        case 0x133d78u: goto label_133d78;
        case 0x133d7cu: goto label_133d7c;
        case 0x133d80u: goto label_133d80;
        case 0x133d84u: goto label_133d84;
        case 0x133d88u: goto label_133d88;
        case 0x133d8cu: goto label_133d8c;
        default: break;
    }

    ctx->pc = 0x133c10u;

label_133c10:
    // 0x133c10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x133c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_133c14:
    // 0x133c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x133c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_133c18:
    // 0x133c18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_133c1c:
    // 0x133c1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_133c20:
    // 0x133c20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_133c24:
    // 0x133c24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_133c28:
    // 0x133c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_133c2c:
    // 0x133c2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x133c2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_133c30:
    // 0x133c30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x133c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_133c34:
    // 0x133c34: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x133c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_133c38:
    // 0x133c38: 0xc04ceec  jal         func_133BB0
label_133c3c:
    if (ctx->pc == 0x133C3Cu) {
        ctx->pc = 0x133C40u;
        goto label_133c40;
    }
    ctx->pc = 0x133C38u;
    SET_GPR_U32(ctx, 31, 0x133C40u);
    ctx->pc = 0x133BB0u;
    if (runtime->hasFunction(0x133BB0u)) {
        auto targetFn = runtime->lookupFunction(0x133BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C40u; }
        if (ctx->pc != 0x133C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__13mgCMDTBuilderFv_0x133bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C40u; }
        if (ctx->pc != 0x133C40u) { return; }
    }
    ctx->pc = 0x133C40u;
label_133c40:
    // 0x133c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133c44:
    // 0x133c44: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_133c48:
    if (ctx->pc == 0x133C48u) {
        ctx->pc = 0x133C4Cu;
        goto label_133c4c;
    }
    ctx->pc = 0x133C44u;
    {
        const bool branch_taken_0x133c44 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c44) {
            ctx->pc = 0x133C5Cu;
            goto label_133c5c;
        }
    }
    ctx->pc = 0x133C4Cu;
label_133c4c:
    // 0x133c4c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_133c50:
    if (ctx->pc == 0x133C50u) {
        ctx->pc = 0x133C54u;
        goto label_133c54;
    }
    ctx->pc = 0x133C4Cu;
    {
        const bool branch_taken_0x133c4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c4c) {
            ctx->pc = 0x133C5Cu;
            goto label_133c5c;
        }
    }
    ctx->pc = 0x133C54u;
label_133c54:
    // 0x133c54: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_133c58:
    if (ctx->pc == 0x133C58u) {
        ctx->pc = 0x133C5Cu;
        goto label_133c5c;
    }
    ctx->pc = 0x133C54u;
    {
        const bool branch_taken_0x133c54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x133c54) {
            ctx->pc = 0x133C64u;
            goto label_133c64;
        }
    }
    ctx->pc = 0x133C5Cu;
label_133c5c:
    // 0x133c5c: 0x10000043  b           . + 4 + (0x43 << 2)
label_133c60:
    if (ctx->pc == 0x133C60u) {
        ctx->pc = 0x133C64u;
        goto label_133c64;
    }
    ctx->pc = 0x133C5Cu;
    {
        const bool branch_taken_0x133c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c5c) {
            ctx->pc = 0x133D6Cu;
            goto label_133d6c;
        }
    }
    ctx->pc = 0x133C64u;
label_133c64:
    // 0x133c64: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x133c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_133c68:
    // 0x133c68: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_133c6c:
    if (ctx->pc == 0x133C6Cu) {
        ctx->pc = 0x133C70u;
        goto label_133c70;
    }
    ctx->pc = 0x133C68u;
    {
        const bool branch_taken_0x133c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x133c68) {
            ctx->pc = 0x133C78u;
            goto label_133c78;
        }
    }
    ctx->pc = 0x133C70u;
label_133c70:
    // 0x133c70: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x133c70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_133c74:
    // 0x133c74: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x133c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_133c78:
    // 0x133c78: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x133c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_133c7c:
    // 0x133c7c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x133c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_133c80:
    // 0x133c80: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x133c80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_133c84:
    // 0x133c84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x133c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_133c88:
    // 0x133c88: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x133c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_133c8c:
    // 0x133c8c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x133c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_133c90:
    // 0x133c90: 0xc04cc98  jal         func_133260
label_133c94:
    if (ctx->pc == 0x133C94u) {
        ctx->pc = 0x133C98u;
        goto label_133c98;
    }
    ctx->pc = 0x133C90u;
    SET_GPR_U32(ctx, 31, 0x133C98u);
    ctx->pc = 0x133260u;
    if (runtime->hasFunction(0x133260u)) {
        auto targetFn = runtime->lookupFunction(0x133260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C98u; }
        if (ctx->pc != 0x133C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateBBoxSphere__FPfPfPfPA4_fi_0x133260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C98u; }
        if (ctx->pc != 0x133C98u) { return; }
    }
    ctx->pc = 0x133C98u;
label_133c98:
    // 0x133c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_133c9c:
    // 0x133c9c: 0x8e79001c  lw          $t9, 0x1C($s3)
    ctx->pc = 0x133c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_133ca0:
    // 0x133ca0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x133ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_133ca4:
    // 0x133ca4: 0x320f809  jalr        $t9
label_133ca8:
    if (ctx->pc == 0x133CA8u) {
        ctx->pc = 0x133CACu;
        goto label_133cac;
    }
    ctx->pc = 0x133CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133CACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x133CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133CACu; }
            if (ctx->pc != 0x133CACu) { return; }
        }
        }
    }
    ctx->pc = 0x133CACu;
label_133cac:
    // 0x133cac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_133cb0:
    // 0x133cb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x133cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133cb4:
    // 0x133cb4: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x133cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_133cb8:
    // 0x133cb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x133cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133cbc:
    // 0x133cbc: 0x8e79001c  lw          $t9, 0x1C($s3)
    ctx->pc = 0x133cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_133cc0:
    // 0x133cc0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x133cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_133cc4:
    // 0x133cc4: 0x320f809  jalr        $t9
label_133cc8:
    if (ctx->pc == 0x133CC8u) {
        ctx->pc = 0x133CCCu;
        goto label_133ccc;
    }
    ctx->pc = 0x133CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133CCCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x133CCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133CCCu; }
            if (ctx->pc != 0x133CCCu) { return; }
        }
        }
    }
    ctx->pc = 0x133CCCu;
label_133ccc:
    // 0x133ccc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x133cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_133cd0:
    // 0x133cd0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x133cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_133cd4:
    // 0x133cd4: 0xc04e748  jal         func_139D20
label_133cd8:
    if (ctx->pc == 0x133CD8u) {
        ctx->pc = 0x133CDCu;
        goto label_133cdc;
    }
    ctx->pc = 0x133CD4u;
    SET_GPR_U32(ctx, 31, 0x133CDCu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CDCu; }
        if (ctx->pc != 0x133CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CDCu; }
        if (ctx->pc != 0x133CDCu) { return; }
    }
    ctx->pc = 0x133CDCu;
label_133cdc:
    // 0x133cdc: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x133cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_133ce0:
    // 0x133ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133ce4:
    // 0x133ce4: 0xc04e638  jal         func_1398E0
label_133ce8:
    if (ctx->pc == 0x133CE8u) {
        ctx->pc = 0x133CECu;
        goto label_133cec;
    }
    ctx->pc = 0x133CE4u;
    SET_GPR_U32(ctx, 31, 0x133CECu);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CECu; }
        if (ctx->pc != 0x133CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CECu; }
        if (ctx->pc != 0x133CECu) { return; }
    }
    ctx->pc = 0x133CECu;
label_133cec:
    // 0x133cec: 0xae8200f0  sw          $v0, 0xF0($s4)
    ctx->pc = 0x133cecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 2));
label_133cf0:
    // 0x133cf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x133cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_133cf4:
    // 0x133cf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x133cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_133cf8:
    // 0x133cf8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x133cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_133cfc:
    // 0x133cfc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x133cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_133d00:
    // 0x133d00: 0x320f809  jalr        $t9
label_133d04:
    if (ctx->pc == 0x133D04u) {
        ctx->pc = 0x133D08u;
        goto label_133d08;
    }
    ctx->pc = 0x133D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133D08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x133D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133D08u; }
            if (ctx->pc != 0x133D08u) { return; }
        }
        }
    }
    ctx->pc = 0x133D08u;
label_133d08:
    // 0x133d08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x133d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_133d0c:
    // 0x133d0c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_133d10:
    // 0x133d10: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x133d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_133d14:
    // 0x133d14: 0xc04d97c  jal         func_1365F0
label_133d18:
    if (ctx->pc == 0x133D18u) {
        ctx->pc = 0x133D1Cu;
        goto label_133d1c;
    }
    ctx->pc = 0x133D14u;
    SET_GPR_U32(ctx, 31, 0x133D1Cu);
    ctx->pc = 0x1365F0u;
    if (runtime->hasFunction(0x1365F0u)) {
        auto targetFn = runtime->lookupFunction(0x1365F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D1Cu; }
        if (ctx->pc != 0x133D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBBox__8mgCFrameFPfPf_0x1365f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D1Cu; }
        if (ctx->pc != 0x133D1Cu) { return; }
    }
    ctx->pc = 0x133D1Cu;
label_133d1c:
    // 0x133d1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x133d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_133d20:
    // 0x133d20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x133d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_133d24:
    // 0x133d24: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x133d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_133d28:
    // 0x133d28: 0xc04d9d8  jal         func_136760
label_133d2c:
    if (ctx->pc == 0x133D2Cu) {
        ctx->pc = 0x133D30u;
        goto label_133d30;
    }
    ctx->pc = 0x133D28u;
    SET_GPR_U32(ctx, 31, 0x133D30u);
    ctx->pc = 0x136760u;
    if (runtime->hasFunction(0x136760u)) {
        auto targetFn = runtime->lookupFunction(0x136760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D30u; }
        if (ctx->pc != 0x133D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBSphere__8mgCFrameFPff_0x136760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D30u; }
        if (ctx->pc != 0x133D30u) { return; }
    }
    ctx->pc = 0x133D30u;
label_133d30:
    // 0x133d30: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x133d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_133d34:
    // 0x133d34: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x133d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_133d38:
    // 0x133d38: 0xc04e748  jal         func_139D20
label_133d3c:
    if (ctx->pc == 0x133D3Cu) {
        ctx->pc = 0x133D40u;
        goto label_133d40;
    }
    ctx->pc = 0x133D38u;
    SET_GPR_U32(ctx, 31, 0x133D40u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D40u; }
        if (ctx->pc != 0x133D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D40u; }
        if (ctx->pc != 0x133D40u) { return; }
    }
    ctx->pc = 0x133D40u;
label_133d40:
    // 0x133d40: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x133d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_133d44:
    // 0x133d44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133d48:
    // 0x133d48: 0xc04e638  jal         func_1398E0
label_133d4c:
    if (ctx->pc == 0x133D4Cu) {
        ctx->pc = 0x133D50u;
        goto label_133d50;
    }
    ctx->pc = 0x133D48u;
    SET_GPR_U32(ctx, 31, 0x133D50u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D50u; }
        if (ctx->pc != 0x133D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D50u; }
        if (ctx->pc != 0x133D50u) { return; }
    }
    ctx->pc = 0x133D50u;
label_133d50:
    // 0x133d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133d54:
    // 0x133d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_133d58:
    if (ctx->pc == 0x133D58u) {
        ctx->pc = 0x133D5Cu;
        goto label_133d5c;
    }
    ctx->pc = 0x133D54u;
    {
        const bool branch_taken_0x133d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d54) {
            ctx->pc = 0x133D68u;
            goto label_133d68;
        }
    }
    ctx->pc = 0x133D5Cu;
label_133d5c:
    // 0x133d5c: 0xc04d6d8  jal         func_135B60
label_133d60:
    if (ctx->pc == 0x133D60u) {
        ctx->pc = 0x133D64u;
        goto label_133d64;
    }
    ctx->pc = 0x133D5Cu;
    SET_GPR_U32(ctx, 31, 0x133D64u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D64u; }
        if (ctx->pc != 0x133D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D64u; }
        if (ctx->pc != 0x133D64u) { return; }
    }
    ctx->pc = 0x133D64u;
label_133d64:
    // 0x133d64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133d68:
    // 0x133d68: 0xae8400f4  sw          $a0, 0xF4($s4)
    ctx->pc = 0x133d68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 244), GPR_U32(ctx, 4));
label_133d6c:
    // 0x133d6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x133d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_133d70:
    // 0x133d70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_133d74:
    // 0x133d74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_133d78:
    // 0x133d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_133d7c:
    // 0x133d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_133d80:
    // 0x133d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_133d84:
    // 0x133d84: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x133d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_133d88:
    // 0x133d88: 0x3e00008  jr          $ra
label_133d8c:
    if (ctx->pc == 0x133D8Cu) {
        ctx->pc = 0x133D90u;
        goto label_fallthrough_0x133d88;
    }
    ctx->pc = 0x133D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x133d88:
    ctx->pc = 0x133D90u;
}
