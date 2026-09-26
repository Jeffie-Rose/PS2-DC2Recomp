#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachForm__14CMenuMosSelectFv
// Address: 0x2b61d0 - 0x2b62c4
void AttachForm__14CMenuMosSelectFv_0x2b61d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachForm__14CMenuMosSelectFv_0x2b61d0");
#endif

    switch (ctx->pc) {
        case 0x2b61fcu: goto label_2b61fc;
        case 0x2b6210u: goto label_2b6210;
        case 0x2b6224u: goto label_2b6224;
        case 0x2b6240u: goto label_2b6240;
        case 0x2b6248u: goto label_2b6248;
        case 0x2b6260u: goto label_2b6260;
        case 0x2b6274u: goto label_2b6274;
        case 0x2b6280u: goto label_2b6280;
        default: break;
    }

    ctx->pc = 0x2b61d0u;

    // 0x2b61d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b61d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b61d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b61d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b61d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b61d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b61dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b61e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b61e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b61e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b61ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b61ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b61f0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b61f4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2B61F4u;
    SET_GPR_U32(ctx, 31, 0x2B61FCu);
    ctx->pc = 0x2B61F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B61F4u;
            // 0x2b61f8: 0x24a5ef60  addiu       $a1, $a1, -0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B61FCu; }
        if (ctx->pc != 0x2B61FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B61FCu; }
        if (ctx->pc != 0x2B61FCu) { return; }
    }
    ctx->pc = 0x2B61FCu;
label_2b61fc:
    // 0x2b61fc: 0xae624670  sw          $v0, 0x4670($s3)
    ctx->pc = 0x2b61fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18032), GPR_U32(ctx, 2));
    // 0x2b6200: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6204: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b6204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b6208: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2B6208u;
    SET_GPR_U32(ctx, 31, 0x2B6210u);
    ctx->pc = 0x2B620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6208u;
            // 0x2b620c: 0x24a5ef78  addiu       $a1, $a1, -0x1088 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6210u; }
        if (ctx->pc != 0x2B6210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6210u; }
        if (ctx->pc != 0x2B6210u) { return; }
    }
    ctx->pc = 0x2B6210u;
label_2b6210:
    // 0x2b6210: 0xae624678  sw          $v0, 0x4678($s3)
    ctx->pc = 0x2b6210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18040), GPR_U32(ctx, 2));
    // 0x2b6214: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6218: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b6218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b621c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2B621Cu;
    SET_GPR_U32(ctx, 31, 0x2B6224u);
    ctx->pc = 0x2B6220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B621Cu;
            // 0x2b6220: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6224u; }
        if (ctx->pc != 0x2B6224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6224u; }
        if (ctx->pc != 0x2B6224u) { return; }
    }
    ctx->pc = 0x2B6224u;
label_2b6224:
    // 0x2b6224: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b6224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b6228: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b622c: 0xae624674  sw          $v0, 0x4674($s3)
    ctx->pc = 0x2b622cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18036), GPR_U32(ctx, 2));
    // 0x2b6230: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2b6230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2b6234: 0x24a5efa8  addiu       $a1, $a1, -0x1058
    ctx->pc = 0x2b6234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963112));
    // 0x2b6238: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2B6238u;
    SET_GPR_U32(ctx, 31, 0x2B6240u);
    ctx->pc = 0x2B623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6238u;
            // 0x2b623c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6240u; }
        if (ctx->pc != 0x2B6240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6240u; }
        if (ctx->pc != 0x2B6240u) { return; }
    }
    ctx->pc = 0x2B6240u;
label_2b6240:
    // 0x2b6240: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2B6240u;
    SET_GPR_U32(ctx, 31, 0x2B6248u);
    ctx->pc = 0x2B6244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6240u;
            // 0x2b6244: 0xaf8296b8  sw          $v0, -0x6948($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6248u; }
        if (ctx->pc != 0x2B6248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6248u; }
        if (ctx->pc != 0x2B6248u) { return; }
    }
    ctx->pc = 0x2B6248u;
label_2b6248:
    // 0x2b6248: 0x8e634670  lw          $v1, 0x4670($s3)
    ctx->pc = 0x2b6248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18032)));
    // 0x2b624c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B624Cu;
    {
        const bool branch_taken_0x2b624c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b624c) {
            ctx->pc = 0x2B62A8u;
            goto label_2b62a8;
        }
    }
    ctx->pc = 0x2B6254u;
    // 0x2b6254: 0x8e700140  lw          $s0, 0x140($s3)
    ctx->pc = 0x2b6254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x2b6258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b6258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b625c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b625cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6260:
    // 0x2b6260: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6264: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2b6264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b6268: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x2b6268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
    // 0x2b626c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B626Cu;
    SET_GPR_U32(ctx, 31, 0x2B6274u);
    ctx->pc = 0x2B6270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B626Cu;
            // 0x2b6270: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6274u; }
        if (ctx->pc != 0x2B6274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6274u; }
        if (ctx->pc != 0x2B6274u) { return; }
    }
    ctx->pc = 0x2B6274u;
label_2b6274:
    // 0x2b6274: 0x8e644670  lw          $a0, 0x4670($s3)
    ctx->pc = 0x2b6274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18032)));
    // 0x2b6278: 0xc089664  jal         func_225990
    ctx->pc = 0x2B6278u;
    SET_GPR_U32(ctx, 31, 0x2B6280u);
    ctx->pc = 0x2B627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6278u;
            // 0x2b627c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6280u; }
        if (ctx->pc != 0x2B6280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6280u; }
        if (ctx->pc != 0x2B6280u) { return; }
    }
    ctx->pc = 0x2B6280u;
label_2b6280:
    // 0x2b6280: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6280u;
    {
        const bool branch_taken_0x2b6280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6280u;
            // 0x2b6284: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6280) {
            ctx->pc = 0x2B6294u;
            goto label_2b6294;
        }
    }
    ctx->pc = 0x2B6288u;
    // 0x2b6288: 0x9063000a  lbu         $v1, 0xA($v1)
    ctx->pc = 0x2b6288u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2b628c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2b628cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b6290: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x2b6290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
label_2b6294:
    // 0x2b6294: 0x0  nop
    ctx->pc = 0x2b6294u;
    // NOP
    // 0x2b6298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b6298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b629c: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x2b629cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2b62a0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2B62A0u;
    {
        const bool branch_taken_0x2b62a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B62A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B62A0u;
            // 0x2b62a4: 0x265200bc  addiu       $s2, $s2, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62a0) {
            ctx->pc = 0x2B6260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b6260;
        }
    }
    ctx->pc = 0x2B62A8u;
label_2b62a8:
    // 0x2b62a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b62a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b62ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b62acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b62b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b62b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b62b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b62b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b62b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b62b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b62bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B62BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B62C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B62BCu;
            // 0x2b62c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B62C4u;
}
