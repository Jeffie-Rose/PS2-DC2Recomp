#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPosMenuItemBrdKoma__18CMenuPosDataManageFPiii
// Address: 0x22c270 - 0x22c37c
void GetPosMenuItemBrdKoma__18CMenuPosDataManageFPiii_0x22c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosMenuItemBrdKoma__18CMenuPosDataManageFPiii_0x22c270");
#endif

    switch (ctx->pc) {
        case 0x22c2a0u: goto label_22c2a0;
        case 0x22c2b4u: goto label_22c2b4;
        case 0x22c330u: goto label_22c330;
        default: break;
    }

    ctx->pc = 0x22c270u;

    // 0x22c270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22c278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22c27c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22c280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22c284: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22c284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c28c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22c290: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22c290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c294: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x22c294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c298: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22C298u;
    SET_GPR_U32(ctx, 31, 0x22C2A0u);
    ctx->pc = 0x22C29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C298u;
            // 0x22c29c: 0x24a5a6d0  addiu       $a1, $a1, -0x5930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C2A0u; }
        if (ctx->pc != 0x22C2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C2A0u; }
        if (ctx->pc != 0x22C2A0u) { return; }
    }
    ctx->pc = 0x22C2A0u;
label_22c2a0:
    // 0x22c2a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22c2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2a4: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x22C2A4u;
    {
        const bool branch_taken_0x22c2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C2A4u;
            // 0x22c2a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2a4) {
            ctx->pc = 0x22C360u;
            goto label_22c360;
        }
    }
    ctx->pc = 0x22C2ACu;
    // 0x22c2ac: 0xc08a26c  jal         func_2289B0
    ctx->pc = 0x22C2ACu;
    SET_GPR_U32(ctx, 31, 0x22C2B4u);
    ctx->pc = 0x2289B0u;
    if (runtime->hasFunction(0x2289B0u)) {
        auto targetFn = runtime->lookupFunction(0x2289B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C2B4u; }
        if (ctx->pc != 0x22C2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextMovePos__16CMenuPosDataFormFPi_0x2289b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C2B4u; }
        if (ctx->pc != 0x22C2B4u) { return; }
    }
    ctx->pc = 0x22C2B4u;
label_22c2b4:
    // 0x22c2b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22c2b8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x22c2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c2bc: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x22c2bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c2c0: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x22c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x22c2c4: 0x0  nop
    ctx->pc = 0x22c2c4u;
    // NOP
    // 0x22c2c8: 0x3810  mfhi        $a3
    ctx->pc = 0x22c2c8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x22c2cc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x22c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x22c2d0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x22c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x22c2d4: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x22c2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22c2d8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x22c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x22c2dc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22c2e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x22c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x22c2e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22c2e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22c2ec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x22c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x22c2f0: 0x1010  mfhi        $v0
    ctx->pc = 0x22c2f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x22c2f4: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x22c2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22c2f8: 0xc7809408  lwc1        $f0, -0x6BF8($gp)
    ctx->pc = 0x22c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c2fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c300: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22c300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22c304: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22c304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22c308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22c30c: 0x24d30014  addiu       $s3, $a2, 0x14
    ctx->pc = 0x22c30cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x22c310: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c314: 0x24d0010e  addiu       $s0, $a2, 0x10E
    ctx->pc = 0x22c314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 270));
    // 0x22c318: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22c318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22c31c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c320: 0x0  nop
    ctx->pc = 0x22c320u;
    // NOP
    // 0x22c324: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22c324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22c328: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22C328u;
    SET_GPR_U32(ctx, 31, 0x22C330u);
    ctx->pc = 0x22C32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C328u;
            // 0x22c32c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C330u; }
        if (ctx->pc != 0x22C330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C330u; }
        if (ctx->pc != 0x22C330u) { return; }
    }
    ctx->pc = 0x22C330u;
label_22c330:
    // 0x22c330: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x22C330u;
    {
        const bool branch_taken_0x22c330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C330u;
            // 0x22c334: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c330) {
            ctx->pc = 0x22C360u;
            goto label_22c360;
        }
    }
    ctx->pc = 0x22C338u;
    // 0x22c338: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x22c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22c33c: 0x73082a  slt         $at, $v1, $s3
    ctx->pc = 0x22c33cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22c340: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C340u;
    {
        const bool branch_taken_0x22c340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c340) {
            ctx->pc = 0x22C34Cu;
            goto label_22c34c;
        }
    }
    ctx->pc = 0x22C348u;
    // 0x22c348: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x22c348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_22c34c:
    // 0x22c34c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x22c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22c350: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x22c350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22c354: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C354u;
    {
        const bool branch_taken_0x22c354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c354) {
            ctx->pc = 0x22C360u;
            goto label_22c360;
        }
    }
    ctx->pc = 0x22C35Cu;
    // 0x22c35c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x22c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_22c360:
    // 0x22c360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22c360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c36c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c374: 0x3e00008  jr          $ra
    ctx->pc = 0x22C374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C374u;
            // 0x22c378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C37Cu;
}
