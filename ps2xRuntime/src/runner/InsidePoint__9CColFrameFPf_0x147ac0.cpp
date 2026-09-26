#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InsidePoint__9CColFrameFPf
// Address: 0x147ac0 - 0x147b3c
void InsidePoint__9CColFrameFPf_0x147ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InsidePoint__9CColFrameFPf_0x147ac0");
#endif

    switch (ctx->pc) {
        case 0x147ac0u: goto label_147ac0;
        case 0x147ac4u: goto label_147ac4;
        case 0x147ac8u: goto label_147ac8;
        case 0x147accu: goto label_147acc;
        case 0x147ad0u: goto label_147ad0;
        case 0x147ad4u: goto label_147ad4;
        case 0x147ad8u: goto label_147ad8;
        case 0x147adcu: goto label_147adc;
        case 0x147ae0u: goto label_147ae0;
        case 0x147ae4u: goto label_147ae4;
        case 0x147ae8u: goto label_147ae8;
        case 0x147aecu: goto label_147aec;
        case 0x147af0u: goto label_147af0;
        case 0x147af4u: goto label_147af4;
        case 0x147af8u: goto label_147af8;
        case 0x147afcu: goto label_147afc;
        case 0x147b00u: goto label_147b00;
        case 0x147b04u: goto label_147b04;
        case 0x147b08u: goto label_147b08;
        case 0x147b0cu: goto label_147b0c;
        case 0x147b10u: goto label_147b10;
        case 0x147b14u: goto label_147b14;
        case 0x147b18u: goto label_147b18;
        case 0x147b1cu: goto label_147b1c;
        case 0x147b20u: goto label_147b20;
        case 0x147b24u: goto label_147b24;
        case 0x147b28u: goto label_147b28;
        case 0x147b2cu: goto label_147b2c;
        case 0x147b30u: goto label_147b30;
        case 0x147b34u: goto label_147b34;
        case 0x147b38u: goto label_147b38;
        default: break;
    }

    ctx->pc = 0x147ac0u;

label_147ac0:
    // 0x147ac0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x147ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_147ac4:
    // 0x147ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x147ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_147ac8:
    // 0x147ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_147acc:
    // 0x147acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_147ad0:
    // 0x147ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147ad4:
    // 0x147ad4: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x147ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_147ad8:
    // 0x147ad8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_147adc:
    if (ctx->pc == 0x147ADCu) {
        ctx->pc = 0x147ADCu;
            // 0x147adc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147AE0u;
        goto label_147ae0;
    }
    ctx->pc = 0x147AD8u;
    {
        const bool branch_taken_0x147ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147AD8u;
            // 0x147adc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ad8) {
            ctx->pc = 0x147AE8u;
            goto label_147ae8;
        }
    }
    ctx->pc = 0x147AE0u;
label_147ae0:
    // 0x147ae0: 0x10000011  b           . + 4 + (0x11 << 2)
label_147ae4:
    if (ctx->pc == 0x147AE4u) {
        ctx->pc = 0x147AE4u;
            // 0x147ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147AE8u;
        goto label_147ae8;
    }
    ctx->pc = 0x147AE0u;
    {
        const bool branch_taken_0x147ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147AE0u;
            // 0x147ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ae0) {
            ctx->pc = 0x147B28u;
            goto label_147b28;
        }
    }
    ctx->pc = 0x147AE8u;
label_147ae8:
    // 0x147ae8: 0xc04dc0c  jal         func_137030
label_147aec:
    if (ctx->pc == 0x147AECu) {
        ctx->pc = 0x147AECu;
            // 0x147aec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x147AF0u;
        goto label_147af0;
    }
    ctx->pc = 0x147AE8u;
    SET_GPR_U32(ctx, 31, 0x147AF0u);
    ctx->pc = 0x147AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147AE8u;
            // 0x147aec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AF0u; }
        if (ctx->pc != 0x147AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AF0u; }
        if (ctx->pc != 0x147AF0u) { return; }
    }
    ctx->pc = 0x147AF0u;
label_147af0:
    // 0x147af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147af4:
    // 0x147af4: 0xc04dcc8  jal         func_137320
label_147af8:
    if (ctx->pc == 0x147AF8u) {
        ctx->pc = 0x147AF8u;
            // 0x147af8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x147AFCu;
        goto label_147afc;
    }
    ctx->pc = 0x147AF4u;
    SET_GPR_U32(ctx, 31, 0x147AFCu);
    ctx->pc = 0x147AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147AF4u;
            // 0x147af8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137320u;
    if (runtime->hasFunction(0x137320u)) {
        auto targetFn = runtime->lookupFunction(0x137320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AFCu; }
        if (ctx->pc != 0x147AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInverseMatrix__8mgCFrameFPA4_f_0x137320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AFCu; }
        if (ctx->pc != 0x147AFCu) { return; }
    }
    ctx->pc = 0x147AFCu;
label_147afc:
    // 0x147afc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x147afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_147b00:
    // 0x147b00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x147b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_147b04:
    // 0x147b04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x147b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_147b08:
    // 0x147b08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x147b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_147b0c:
    // 0x147b0c: 0xc041bb0  jal         func_106EC0
label_147b10:
    if (ctx->pc == 0x147B10u) {
        ctx->pc = 0x147B10u;
            // 0x147b10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x147B14u;
        goto label_147b14;
    }
    ctx->pc = 0x147B0Cu;
    SET_GPR_U32(ctx, 31, 0x147B14u);
    ctx->pc = 0x147B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147B0Cu;
            // 0x147b10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147B14u; }
        if (ctx->pc != 0x147B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147B14u; }
        if (ctx->pc != 0x147B14u) { return; }
    }
    ctx->pc = 0x147B14u;
label_147b14:
    // 0x147b14: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x147b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_147b18:
    // 0x147b18: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x147b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_147b1c:
    // 0x147b1c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x147b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_147b20:
    // 0x147b20: 0x320f809  jalr        $t9
label_147b24:
    if (ctx->pc == 0x147B24u) {
        ctx->pc = 0x147B24u;
            // 0x147b24: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x147B28u;
        goto label_147b28;
    }
    ctx->pc = 0x147B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x147B28u);
        ctx->pc = 0x147B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147B20u;
            // 0x147b24: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x147B28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x147B28u; }
            if (ctx->pc != 0x147B28u) { return; }
        }
        }
    }
    ctx->pc = 0x147B28u;
label_147b28:
    // 0x147b28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x147b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_147b2c:
    // 0x147b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_147b30:
    // 0x147b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_147b34:
    // 0x147b34: 0x3e00008  jr          $ra
label_147b38:
    if (ctx->pc == 0x147B38u) {
        ctx->pc = 0x147B38u;
            // 0x147b38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x147B3Cu;
        goto label_fallthrough_0x147b34;
    }
    ctx->pc = 0x147B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147B34u;
            // 0x147b38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x147b34:
    ctx->pc = 0x147B3Cu;
}
