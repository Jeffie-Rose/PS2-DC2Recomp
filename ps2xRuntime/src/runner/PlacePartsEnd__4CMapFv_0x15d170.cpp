#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlacePartsEnd__4CMapFv
// Address: 0x15d170 - 0x15d34c
void PlacePartsEnd__4CMapFv_0x15d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlacePartsEnd__4CMapFv_0x15d170");
#endif

    switch (ctx->pc) {
        case 0x15d1a8u: goto label_15d1a8;
        case 0x15d214u: goto label_15d214;
        case 0x15d244u: goto label_15d244;
        case 0x15d260u: goto label_15d260;
        case 0x15d27cu: goto label_15d27c;
        case 0x15d294u: goto label_15d294;
        case 0x15d2c0u: goto label_15d2c0;
        default: break;
    }

    ctx->pc = 0x15d170u;

    // 0x15d170: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15d174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d178: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15d178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15d17c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15d17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d180: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15d184: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15d188: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15d18c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d190: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15d190u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d194: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d19c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d1a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15D1A0u;
    {
        const bool branch_taken_0x15d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1A0u;
            // 0x15d1a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1a0) {
            ctx->pc = 0x15D1F0u;
            goto label_15d1f0;
        }
    }
    ctx->pc = 0x15D1A8u;
label_15d1a8:
    // 0x15d1a8: 0x8ea30cf8  lw          $v1, 0xCF8($s5)
    ctx->pc = 0x15d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3320)));
    // 0x15d1ac: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x15d1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15d1b0: 0x8cc30070  lw          $v1, 0x70($a2)
    ctx->pc = 0x15d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x15d1b4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15D1B4u;
    {
        const bool branch_taken_0x15d1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1b4) {
            ctx->pc = 0x15D1E4u;
            goto label_15d1e4;
        }
    }
    ctx->pc = 0x15D1BCu;
    // 0x15d1bc: 0x8cc30090  lw          $v1, 0x90($a2)
    ctx->pc = 0x15d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x15d1c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D1C0u;
    {
        const bool branch_taken_0x15d1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d1c0) {
            ctx->pc = 0x15D1E4u;
            goto label_15d1e4;
        }
    }
    ctx->pc = 0x15D1C8u;
    // 0x15d1c8: 0x8cc40098  lw          $a0, 0x98($a2)
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
    // 0x15d1cc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15d1d0: 0xacc30098  sw          $v1, 0x98($a2)
    ctx->pc = 0x15d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 3));
    // 0x15d1d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d1d8: 0x8cc3009c  lw          $v1, 0x9C($a2)
    ctx->pc = 0x15d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
    // 0x15d1dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d1e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_15d1e4:
    // 0x15d1e4: 0x0  nop
    ctx->pc = 0x15d1e4u;
    // NOP
    // 0x15d1e8: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x15d1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x15d1ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15d1f0:
    // 0x15d1f0: 0x8ea30cf4  lw          $v1, 0xCF4($s5)
    ctx->pc = 0x15d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
    // 0x15d1f4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x15d1f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d1f8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15D1F8u;
    {
        const bool branch_taken_0x15d1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d1f8) {
            ctx->pc = 0x15D1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d1a8;
        }
    }
    ctx->pc = 0x15D200u;
    // 0x15d200: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x15d204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15d204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d208: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15d208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d20c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x15D20Cu;
    {
        const bool branch_taken_0x15d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D20Cu;
            // 0x15d210: 0xaea30330  sw          $v1, 0x330($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d20c) {
            ctx->pc = 0x15D310u;
            goto label_15d310;
        }
    }
    ctx->pc = 0x15D214u;
label_15d214:
    // 0x15d214: 0x8ea2032c  lw          $v0, 0x32C($s5)
    ctx->pc = 0x15d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 812)));
    // 0x15d218: 0x54b021  addu        $s6, $v0, $s4
    ctx->pc = 0x15d218u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15d21c: 0x82c20070  lb          $v0, 0x70($s6)
    ctx->pc = 0x15d21cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x15d220: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15d220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x15d224: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15d224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15d228: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15D228u;
    {
        const bool branch_taken_0x15d228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D228u;
            // 0x15d22c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d228) {
            ctx->pc = 0x15D234u;
            goto label_15d234;
        }
    }
    ctx->pc = 0x15D230u;
    // 0x15d230: 0xaea20330  sw          $v0, 0x330($s5)
    ctx->pc = 0x15d230u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 816), GPR_U32(ctx, 2));
label_15d234:
    // 0x15d234: 0x0  nop
    ctx->pc = 0x15d234u;
    // NOP
    // 0x15d238: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15d238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d23c: 0xc059c88  jal         func_167220
    ctx->pc = 0x15D23Cu;
    SET_GPR_U32(ctx, 31, 0x15D244u);
    ctx->pc = 0x15D240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D23Cu;
            // 0x15d240: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167220u;
    if (runtime->hasFunction(0x167220u)) {
        auto targetFn = runtime->lookupFunction(0x167220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D244u; }
        if (ctx->pc != 0x15D244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundBox__9CMapPartsFP9mgVu0FBOX_0x167220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D244u; }
        if (ctx->pc != 0x15D244u) { return; }
    }
    ctx->pc = 0x15D244u;
label_15d244:
    // 0x15d244: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D244u;
    {
        const bool branch_taken_0x15d244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d244) {
            ctx->pc = 0x15D27Cu;
            goto label_15d27c;
        }
    }
    ctx->pc = 0x15D24Cu;
    // 0x15d24c: 0x8ea20334  lw          $v0, 0x334($s5)
    ctx->pc = 0x15d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 820)));
    // 0x15d250: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D250u;
    {
        const bool branch_taken_0x15d250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D250u;
            // 0x15d254: 0x26a40340  addiu       $a0, $s5, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d250) {
            ctx->pc = 0x15D26Cu;
            goto label_15d26c;
        }
    }
    ctx->pc = 0x15D258u;
    // 0x15d258: 0xc04e624  jal         func_139890
    ctx->pc = 0x15D258u;
    SET_GPR_U32(ctx, 31, 0x15D260u);
    ctx->pc = 0x15D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D258u;
            // 0x15d25c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D260u; }
        if (ctx->pc != 0x15D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D260u; }
        if (ctx->pc != 0x15D260u) { return; }
    }
    ctx->pc = 0x15D260u;
label_15d260:
    // 0x15d260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d264: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D264u;
    {
        const bool branch_taken_0x15d264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D264u;
            // 0x15d268: 0xaea30334  sw          $v1, 0x334($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 820), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d264) {
            ctx->pc = 0x15D27Cu;
            goto label_15d27c;
        }
    }
    ctx->pc = 0x15D26Cu;
label_15d26c:
    // 0x15d26c: 0x0  nop
    ctx->pc = 0x15d26cu;
    // NOP
    // 0x15d270: 0x26a40340  addiu       $a0, $s5, 0x340
    ctx->pc = 0x15d270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 832));
    // 0x15d274: 0xc04bd50  jal         func_12F540
    ctx->pc = 0x15D274u;
    SET_GPR_U32(ctx, 31, 0x15D27Cu);
    ctx->pc = 0x15D278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D274u;
            // 0x15d278: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F540u;
    if (runtime->hasFunction(0x12F540u)) {
        auto targetFn = runtime->lookupFunction(0x12F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D27Cu; }
        if (ctx->pc != 0x15D27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBoxMaxMin__FP9mgVu0FBOXP9mgVu0FBOX_0x12f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D27Cu; }
        if (ctx->pc != 0x15D27Cu) { return; }
    }
    ctx->pc = 0x15D27Cu;
label_15d27c:
    // 0x15d27c: 0x0  nop
    ctx->pc = 0x15d27cu;
    // NOP
    // 0x15d280: 0x26d70090  addiu       $s7, $s6, 0x90
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x15d284: 0x12e00020  beqz        $s7, . + 4 + (0x20 << 2)
    ctx->pc = 0x15D284u;
    {
        const bool branch_taken_0x15d284 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D284u;
            // 0x15d288: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d284) {
            ctx->pc = 0x15D308u;
            goto label_15d308;
        }
    }
    ctx->pc = 0x15D28Cu;
    // 0x15d28c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15D28Cu;
    {
        const bool branch_taken_0x15d28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D28Cu;
            // 0x15d290: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d28c) {
            ctx->pc = 0x15D2F8u;
            goto label_15d2f8;
        }
    }
    ctx->pc = 0x15D294u;
label_15d294:
    // 0x15d294: 0x0  nop
    ctx->pc = 0x15d294u;
    // NOP
    // 0x15d298: 0x8ea30cf8  lw          $v1, 0xCF8($s5)
    ctx->pc = 0x15d298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3320)));
    // 0x15d29c: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x15d29cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15d2a0: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x15d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x15d2a4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15D2A4u;
    {
        const bool branch_taken_0x15d2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d2a4) {
            ctx->pc = 0x15D2F0u;
            goto label_15d2f0;
        }
    }
    ctx->pc = 0x15D2ACu;
    // 0x15d2ac: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x15d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x15d2b0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x15D2B0u;
    {
        const bool branch_taken_0x15d2b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2B0u;
            // 0x15d2b4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2b0) {
            ctx->pc = 0x15D2F0u;
            goto label_15d2f0;
        }
    }
    ctx->pc = 0x15D2B8u;
    // 0x15d2b8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x15D2B8u;
    SET_GPR_U32(ctx, 31, 0x15D2C0u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2C0u; }
        if (ctx->pc != 0x15D2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2C0u; }
        if (ctx->pc != 0x15D2C0u) { return; }
    }
    ctx->pc = 0x15D2C0u;
label_15d2c0:
    // 0x15d2c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15D2C0u;
    {
        const bool branch_taken_0x15d2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d2c0) {
            ctx->pc = 0x15D2F0u;
            goto label_15d2f0;
        }
    }
    ctx->pc = 0x15D2C8u;
    // 0x15d2c8: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x15d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x15d2cc: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x15d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x15d2d0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x15d2d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d2d4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D2D4u;
    {
        const bool branch_taken_0x15d2d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2D4u;
            // 0x15d2d8: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2d4) {
            ctx->pc = 0x15D2F0u;
            goto label_15d2f0;
        }
    }
    ctx->pc = 0x15D2DCu;
    // 0x15d2dc: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x15d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x15d2e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d2e4: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x15d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x15d2e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d2ec: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x15d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
label_15d2f0:
    // 0x15d2f0: 0x267300a0  addiu       $s3, $s3, 0xA0
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x15d2f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15d2f8:
    // 0x15d2f8: 0x8ea30cf4  lw          $v1, 0xCF4($s5)
    ctx->pc = 0x15d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
    // 0x15d2fc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d2fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d300: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x15D300u;
    {
        const bool branch_taken_0x15d300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d300) {
            ctx->pc = 0x15D294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d294;
        }
    }
    ctx->pc = 0x15D308u;
label_15d308:
    // 0x15d308: 0x26940310  addiu       $s4, $s4, 0x310
    ctx->pc = 0x15d308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
    // 0x15d30c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d310:
    // 0x15d310: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x15d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x15d314: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x15d314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d318: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x15D318u;
    {
        const bool branch_taken_0x15d318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d318) {
            ctx->pc = 0x15D214u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d214;
        }
    }
    ctx->pc = 0x15D320u;
    // 0x15d320: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15d320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15d324: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15d324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d328: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d32c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d32cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d344: 0x3e00008  jr          $ra
    ctx->pc = 0x15D344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D344u;
            // 0x15d348: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D34Cu;
}
