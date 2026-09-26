#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_FRAME_SHOW__FP12RS_STACKDATAi
// Address: 0x2e5250 - 0x2e530c
void ps2__CHR_SET_FRAME_SHOW__FP12RS_STACKDATAi_0x2e5250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_FRAME_SHOW__FP12RS_STACKDATAi_0x2e5250");
#endif

    switch (ctx->pc) {
        case 0x2e527cu: goto label_2e527c;
        case 0x2e528cu: goto label_2e528c;
        case 0x2e5298u: goto label_2e5298;
        case 0x2e52c0u: goto label_2e52c0;
        case 0x2e52d8u: goto label_2e52d8;
        case 0x2e52f0u: goto label_2e52f0;
        default: break;
    }

    ctx->pc = 0x2e5250u;

    // 0x2e5250: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e5250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2e5254: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e5254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e5258: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e5258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e525c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e5260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5264: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5264u;
    {
        const bool branch_taken_0x2e5264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5264u;
            // 0x2e5268: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5264) {
            ctx->pc = 0x2E5274u;
            goto label_2e5274;
        }
    }
    ctx->pc = 0x2E526Cu;
    // 0x2e526c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E526Cu;
    {
        const bool branch_taken_0x2e526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E526Cu;
            // 0x2e5270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e526c) {
            ctx->pc = 0x2E52F4u;
            goto label_2e52f4;
        }
    }
    ctx->pc = 0x2E5274u;
label_2e5274:
    // 0x2e5274: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E5274u;
    SET_GPR_U32(ctx, 31, 0x2E527Cu);
    ctx->pc = 0x2E5278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5274u;
            // 0x2e5278: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E527Cu; }
        if (ctx->pc != 0x2E527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E527Cu; }
        if (ctx->pc != 0x2E527Cu) { return; }
    }
    ctx->pc = 0x2E527Cu;
label_2e527c:
    // 0x2e527c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5284: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5284u;
    SET_GPR_U32(ctx, 31, 0x2E528Cu);
    ctx->pc = 0x2E5288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5284u;
            // 0x2e5288: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E528Cu; }
        if (ctx->pc != 0x2E528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E528Cu; }
        if (ctx->pc != 0x2E528Cu) { return; }
    }
    ctx->pc = 0x2E528Cu;
label_2e528c:
    // 0x2e528c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5290: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5290u;
    SET_GPR_U32(ctx, 31, 0x2E5298u);
    ctx->pc = 0x2E5294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5290u;
            // 0x2e5294: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5298u; }
        if (ctx->pc != 0x2E5298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5298u; }
        if (ctx->pc != 0x2E5298u) { return; }
    }
    ctx->pc = 0x2E5298u;
label_2e5298:
    // 0x2e5298: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e5298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e529c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e52a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e52a4: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2e52a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2e52a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E52A8u;
    {
        const bool branch_taken_0x2e52a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E52ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52A8u;
            // 0x2e52ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52a8) {
            ctx->pc = 0x2E52B8u;
            goto label_2e52b8;
        }
    }
    ctx->pc = 0x2E52B0u;
    // 0x2e52b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E52B0u;
    {
        const bool branch_taken_0x2e52b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52B0u;
            // 0x2e52b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52b0) {
            ctx->pc = 0x2E52F4u;
            goto label_2e52f4;
        }
    }
    ctx->pc = 0x2E52B8u;
label_2e52b8:
    // 0x2e52b8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2E52B8u;
    SET_GPR_U32(ctx, 31, 0x2E52C0u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52C0u; }
        if (ctx->pc != 0x2E52C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52C0u; }
        if (ctx->pc != 0x2E52C0u) { return; }
    }
    ctx->pc = 0x2E52C0u;
label_2e52c0:
    // 0x2e52c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E52C0u;
    {
        const bool branch_taken_0x2e52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E52C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52C0u;
            // 0x2e52c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52c0) {
            ctx->pc = 0x2E52D0u;
            goto label_2e52d0;
        }
    }
    ctx->pc = 0x2E52C8u;
    // 0x2e52c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E52C8u;
    {
        const bool branch_taken_0x2e52c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52C8u;
            // 0x2e52cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52c8) {
            ctx->pc = 0x2E52F4u;
            goto label_2e52f4;
        }
    }
    ctx->pc = 0x2E52D0u;
label_2e52d0:
    // 0x2e52d0: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x2E52D0u;
    SET_GPR_U32(ctx, 31, 0x2E52D8u);
    ctx->pc = 0x2E52D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52D0u;
            // 0x2e52d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52D8u; }
        if (ctx->pc != 0x2E52D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52D8u; }
        if (ctx->pc != 0x2E52D8u) { return; }
    }
    ctx->pc = 0x2E52D8u;
label_2e52d8:
    // 0x2e52d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e52d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e52dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e52e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e52e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e52e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e52e8: 0xc04de54  jal         func_137950
    ctx->pc = 0x2E52E8u;
    SET_GPR_U32(ctx, 31, 0x2E52F0u);
    ctx->pc = 0x2E52ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52E8u;
            // 0x2e52ec: 0xafb10058  sw          $s1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52F0u; }
        if (ctx->pc != 0x2E52F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52F0u; }
        if (ctx->pc != 0x2E52F0u) { return; }
    }
    ctx->pc = 0x2E52F0u;
label_2e52f0:
    // 0x2e52f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e52f4:
    // 0x2e52f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e52f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e52f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e52f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e52fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e52fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5304: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5304u;
            // 0x2e5308: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E530Cu;
}
