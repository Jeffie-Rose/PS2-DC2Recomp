#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcMONSTER__FP9SPI_STACKi
// Address: 0x1941b0 - 0x1942b8
void gcMONSTER__FP9SPI_STACKi_0x1941b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcMONSTER__FP9SPI_STACKi_0x1941b0");
#endif

    switch (ctx->pc) {
        case 0x1941dcu: goto label_1941dc;
        case 0x1941f8u: goto label_1941f8;
        case 0x194208u: goto label_194208;
        case 0x194214u: goto label_194214;
        case 0x194220u: goto label_194220;
        case 0x194230u: goto label_194230;
        case 0x194240u: goto label_194240;
        case 0x19424cu: goto label_19424c;
        case 0x194270u: goto label_194270;
        default: break;
    }

    ctx->pc = 0x1941b0u;

    // 0x1941b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1941b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1941b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1941b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1941b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1941b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1941bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1941bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1941c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1941c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1941c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1941c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1941c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1941ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1941d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1941d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1941d4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1941D4u;
    SET_GPR_U32(ctx, 31, 0x1941DCu);
    ctx->pc = 0x1941D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1941D4u;
            // 0x1941d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941DCu; }
        if (ctx->pc != 0x1941DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941DCu; }
        if (ctx->pc != 0x1941DCu) { return; }
    }
    ctx->pc = 0x1941DCu;
label_1941dc:
    // 0x1941dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1941dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941e0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1941E0u;
    {
        const bool branch_taken_0x1941e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1941E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941E0u;
            // 0x1941e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941e0) {
            ctx->pc = 0x1941F0u;
            goto label_1941f0;
        }
    }
    ctx->pc = 0x1941E8u;
    // 0x1941e8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1941E8u;
    {
        const bool branch_taken_0x1941e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941E8u;
            // 0x1941ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941e8) {
            ctx->pc = 0x194294u;
            goto label_194294;
        }
    }
    ctx->pc = 0x1941F0u;
label_1941f0:
    // 0x1941f0: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x1941F0u;
    SET_GPR_U32(ctx, 31, 0x1941F8u);
    ctx->pc = 0x1941F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1941F0u;
            // 0x1941f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941F8u; }
        if (ctx->pc != 0x1941F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941F8u; }
        if (ctx->pc != 0x1941F8u) { return; }
    }
    ctx->pc = 0x1941F8u;
label_1941f8:
    // 0x1941f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1941f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941fc: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x1941fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x194200: 0xc067830  jal         func_19E0C0
    ctx->pc = 0x194200u;
    SET_GPR_U32(ctx, 31, 0x194208u);
    ctx->pc = 0x194204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194200u;
            // 0x194204: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E0C0u;
    if (runtime->hasFunction(0x19E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194208u; }
        if (ctx->pc != 0x194208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemNotOver__16CUserDataManagerFii_0x19e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194208u; }
        if (ctx->pc != 0x194208u) { return; }
    }
    ctx->pc = 0x194208u;
label_194208:
    // 0x194208: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x194208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x19420c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x19420Cu;
    {
        const bool branch_taken_0x19420c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19420Cu;
            // 0x194210: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19420c) {
            ctx->pc = 0x194290u;
            goto label_194290;
        }
    }
    ctx->pc = 0x194214u;
label_194214:
    // 0x194214: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x194214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194218: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194218u;
    SET_GPR_U32(ctx, 31, 0x194220u);
    ctx->pc = 0x19421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194218u;
            // 0x19421c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194220u; }
        if (ctx->pc != 0x194220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194220u; }
        if (ctx->pc != 0x194220u) { return; }
    }
    ctx->pc = 0x194220u;
label_194220:
    // 0x194220: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x194220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194224: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x194224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x194228: 0xc0ad6d0  jal         func_2B5B40
    ctx->pc = 0x194228u;
    SET_GPR_U32(ctx, 31, 0x194230u);
    ctx->pc = 0x19422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194228u;
            // 0x19422c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B40u;
    if (runtime->hasFunction(0x2B5B40u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194230u; }
        if (ctx->pc != 0x194230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get_gajji_id_from_monster_progress_table__FiPi_0x2b5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194230u; }
        if (ctx->pc != 0x194230u) { return; }
    }
    ctx->pc = 0x194230u;
label_194230:
    // 0x194230: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x194230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194234: 0x26044eb0  addiu       $a0, $s0, 0x4EB0
    ctx->pc = 0x194234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20144));
    // 0x194238: 0xc066b30  jal         func_19ACC0
    ctx->pc = 0x194238u;
    SET_GPR_U32(ctx, 31, 0x194240u);
    ctx->pc = 0x19423Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194238u;
            // 0x19423c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194240u; }
        if (ctx->pc != 0x194240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194240u; }
        if (ctx->pc != 0x194240u) { return; }
    }
    ctx->pc = 0x194240u;
label_194240:
    // 0x194240: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194244: 0xc066b10  jal         func_19AC40
    ctx->pc = 0x194244u;
    SET_GPR_U32(ctx, 31, 0x19424Cu);
    ctx->pc = 0x194248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194244u;
            // 0x194248: 0x26044eb0  addiu       $a0, $s0, 0x4EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC40u;
    if (runtime->hasFunction(0x19AC40u)) {
        auto targetFn = runtime->lookupFunction(0x19AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19424Cu; }
        if (ctx->pc != 0x19424Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiData__11CMonsterBoxFi_0x19ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19424Cu; }
        if (ctx->pc != 0x19424Cu) { return; }
    }
    ctx->pc = 0x19424Cu;
label_19424c:
    // 0x19424c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194250: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x194250u;
    {
        const bool branch_taken_0x194250 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x194250) {
            ctx->pc = 0x194274u;
            goto label_194274;
        }
    }
    ctx->pc = 0x194258u;
    // 0x194258: 0x87a2007c  lh          $v0, 0x7C($sp)
    ctx->pc = 0x194258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x19425c: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x19425cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x194260: 0xa6720008  sh          $s2, 0x8($s3)
    ctx->pc = 0x194260u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 18));
    // 0x194264: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x194264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x194268: 0xc0ad6f4  jal         func_2B5BD0
    ctx->pc = 0x194268u;
    SET_GPR_U32(ctx, 31, 0x194270u);
    ctx->pc = 0x19426Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194268u;
            // 0x19426c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5BD0u;
    if (runtime->hasFunction(0x2B5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194270u; }
        if (ctx->pc != 0x194270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterProgressTableNo__Fii_0x2b5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194270u; }
        if (ctx->pc != 0x194270u) { return; }
    }
    ctx->pc = 0x194270u;
label_194270:
    // 0x194270: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x194270u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
label_194274:
    // 0x194274: 0x0  nop
    ctx->pc = 0x194274u;
    // NOP
    // 0x194278: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x194278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19427c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19427cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194280: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x194280u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x194284: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x194284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x194288: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x194288u;
    {
        const bool branch_taken_0x194288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194288u;
            // 0x19428c: 0xa4324d98  sh          $s2, 0x4D98($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19864), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194288) {
            ctx->pc = 0x194214u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194214;
        }
    }
    ctx->pc = 0x194290u;
label_194290:
    // 0x194290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194294:
    // 0x194294: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x194294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194298: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x194298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19429c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19429cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1942a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1942a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1942a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1942a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1942a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1942a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1942ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1942acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1942b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1942B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1942B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1942B0u;
            // 0x1942b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1942B8u;
}
