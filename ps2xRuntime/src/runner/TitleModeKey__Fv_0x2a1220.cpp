#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleModeKey__Fv
// Address: 0x2a1220 - 0x2a1b58
void TitleModeKey__Fv_0x2a1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleModeKey__Fv_0x2a1220");
#endif

    switch (ctx->pc) {
        case 0x2a1248u: goto label_2a1248;
        case 0x2a1274u: goto label_2a1274;
        case 0x2a12b0u: goto label_2a12b0;
        case 0x2a131cu: goto label_2a131c;
        case 0x2a1330u: goto label_2a1330;
        case 0x2a1358u: goto label_2a1358;
        case 0x2a139cu: goto label_2a139c;
        case 0x2a13b0u: goto label_2a13b0;
        case 0x2a13c8u: goto label_2a13c8;
        case 0x2a13dcu: goto label_2a13dc;
        case 0x2a1438u: goto label_2a1438;
        case 0x2a1440u: goto label_2a1440;
        case 0x2a1448u: goto label_2a1448;
        case 0x2a1480u: goto label_2a1480;
        case 0x2a14dcu: goto label_2a14dc;
        case 0x2a153cu: goto label_2a153c;
        case 0x2a1554u: goto label_2a1554;
        case 0x2a15a4u: goto label_2a15a4;
        case 0x2a15bcu: goto label_2a15bc;
        case 0x2a15d8u: goto label_2a15d8;
        case 0x2a15f0u: goto label_2a15f0;
        case 0x2a1608u: goto label_2a1608;
        case 0x2a163cu: goto label_2a163c;
        case 0x2a1658u: goto label_2a1658;
        case 0x2a1674u: goto label_2a1674;
        case 0x2a1684u: goto label_2a1684;
        case 0x2a16a8u: goto label_2a16a8;
        case 0x2a1738u: goto label_2a1738;
        case 0x2a1788u: goto label_2a1788;
        case 0x2a1790u: goto label_2a1790;
        case 0x2a17d4u: goto label_2a17d4;
        case 0x2a17dcu: goto label_2a17dc;
        case 0x2a1824u: goto label_2a1824;
        case 0x2a182cu: goto label_2a182c;
        case 0x2a183cu: goto label_2a183c;
        case 0x2a186cu: goto label_2a186c;
        case 0x2a1874u: goto label_2a1874;
        case 0x2a191cu: goto label_2a191c;
        case 0x2a192cu: goto label_2a192c;
        case 0x2a1944u: goto label_2a1944;
        case 0x2a19c8u: goto label_2a19c8;
        case 0x2a19e4u: goto label_2a19e4;
        case 0x2a19fcu: goto label_2a19fc;
        case 0x2a1a20u: goto label_2a1a20;
        case 0x2a1a8cu: goto label_2a1a8c;
        case 0x2a1aa8u: goto label_2a1aa8;
        case 0x2a1accu: goto label_2a1acc;
        case 0x2a1af4u: goto label_2a1af4;
        case 0x2a1b04u: goto label_2a1b04;
        case 0x2a1b34u: goto label_2a1b34;
        default: break;
    }

    ctx->pc = 0x2a1220u;

    // 0x2a1220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a1220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a1224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1228: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a1228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a122c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a1230: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a1234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a123c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1240: 0xc0a8c04  jal         func_2A3010
    ctx->pc = 0x2A1240u;
    SET_GPR_U32(ctx, 31, 0x2A1248u);
    ctx->pc = 0x2A1244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1240u;
            // 0x2a1244: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3010u;
    if (runtime->hasFunction(0x2A3010u)) {
        auto targetFn = runtime->lookupFunction(0x2A3010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1248u; }
        if (ctx->pc != 0x2A1248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DCTitleStep__Fi_0x2a3010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1248u; }
        if (ctx->pc != 0x2A1248u) { return; }
    }
    ctx->pc = 0x2A1248u;
label_2a1248:
    // 0x2a1248: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a1248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a124c: 0x8f83845c  lw          $v1, -0x7BA4($gp)
    ctx->pc = 0x2a124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x2a1250: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x2a1250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2a1254: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2a1254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1258: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1258u;
    {
        const bool branch_taken_0x2a1258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1258u;
            // 0x2a125c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1258) {
            ctx->pc = 0x2A1268u;
            goto label_2a1268;
        }
    }
    ctx->pc = 0x2A1260u;
    // 0x2a1260: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A1260u;
    {
        const bool branch_taken_0x2a1260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1260u;
            // 0x2a1264: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1260) {
            ctx->pc = 0x2A128Cu;
            goto label_2a128c;
        }
    }
    ctx->pc = 0x2A1268u;
label_2a1268:
    // 0x2a1268: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a1268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a126c: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A126Cu;
    SET_GPR_U32(ctx, 31, 0x2A1274u);
    ctx->pc = 0x2A1270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A126Cu;
            // 0x2a1270: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1274u; }
        if (ctx->pc != 0x2A1274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1274u; }
        if (ctx->pc != 0x2A1274u) { return; }
    }
    ctx->pc = 0x2A1274u;
label_2a1274:
    // 0x2a1274: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1274u;
    {
        const bool branch_taken_0x2a1274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1274u;
            // 0x2a1278: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1274) {
            ctx->pc = 0x2A1284u;
            goto label_2a1284;
        }
    }
    ctx->pc = 0x2A127Cu;
    // 0x2a127c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2a127cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1280: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a1280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1284:
    // 0x2a1284: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x2A1284u;
    {
        const bool branch_taken_0x2a1284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1284u;
            // 0x2a1288: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1284) {
            ctx->pc = 0x2A1B3Cu;
            goto label_2a1b3c;
        }
    }
    ctx->pc = 0x2A128Cu;
label_2a128c:
    // 0x2a128c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A128Cu;
    {
        const bool branch_taken_0x2a128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a128c) {
            ctx->pc = 0x2A12B8u;
            goto label_2a12b8;
        }
    }
    ctx->pc = 0x2A1294u;
    // 0x2a1294: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a1294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a1298: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a129c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2a129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a12a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a12a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a12a4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a12a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a12a8: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A12A8u;
    SET_GPR_U32(ctx, 31, 0x2A12B0u);
    ctx->pc = 0x2A12ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12A8u;
            // 0x2a12ac: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A12B0u; }
        if (ctx->pc != 0x2A12B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A12B0u; }
        if (ctx->pc != 0x2A12B0u) { return; }
    }
    ctx->pc = 0x2A12B0u;
label_2a12b0:
    // 0x2a12b0: 0x10000221  b           . + 4 + (0x221 << 2)
    ctx->pc = 0x2A12B0u;
    {
        const bool branch_taken_0x2a12b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12B0u;
            // 0x2a12b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12b0) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A12B8u;
label_2a12b8:
    // 0x2a12b8: 0x878399a8  lh          $v1, -0x6658($gp)
    ctx->pc = 0x2a12b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941096)));
    // 0x2a12bc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2a12bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a12c0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A12C0u;
    {
        const bool branch_taken_0x2a12c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a12c0) {
            ctx->pc = 0x2A12D8u;
            goto label_2a12d8;
        }
    }
    ctx->pc = 0x2A12C8u;
    // 0x2a12c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A12C8u;
    {
        const bool branch_taken_0x2a12c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12C8u;
            // 0x2a12cc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12c8) {
            ctx->pc = 0x2A12D8u;
            goto label_2a12d8;
        }
    }
    ctx->pc = 0x2A12D0u;
    // 0x2a12d0: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2A12D0u;
    {
        const bool branch_taken_0x2a12d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a12d0) {
            ctx->pc = 0x2A1438u;
            goto label_2a1438;
        }
    }
    ctx->pc = 0x2A12D8u;
label_2a12d8:
    // 0x2a12d8: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a12dc: 0x93829998  lbu         $v0, -0x6668($gp)
    ctx->pc = 0x2a12dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941080)));
    // 0x2a12e0: 0x93928468  lbu         $s2, -0x7B98($gp)
    ctx->pc = 0x2a12e0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x2a12e4: 0x93918469  lbu         $s1, -0x7B97($gp)
    ctx->pc = 0x2a12e4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935657)));
    // 0x2a12e8: 0x24930d5c  addiu       $s3, $a0, 0xD5C
    ctx->pc = 0x2a12e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 3420));
    // 0x2a12ec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A12ECu;
    {
        const bool branch_taken_0x2a12ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12ECu;
            // 0x2a12f0: 0x24900d7c  addiu       $s0, $a0, 0xD7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12ec) {
            ctx->pc = 0x2A1394u;
            goto label_2a1394;
        }
    }
    ctx->pc = 0x2A12F4u;
    // 0x2a12f4: 0x8783999c  lh          $v1, -0x6664($gp)
    ctx->pc = 0x2a12f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941084)));
    // 0x2a12f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a12fc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A12FCu;
    {
        const bool branch_taken_0x2a12fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a12fc) {
            ctx->pc = 0x2A1328u;
            goto label_2a1328;
        }
    }
    ctx->pc = 0x2A1304u;
    // 0x2a1304: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1304u;
    {
        const bool branch_taken_0x2a1304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1304u;
            // 0x2a1308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1304) {
            ctx->pc = 0x2A1314u;
            goto label_2a1314;
        }
    }
    ctx->pc = 0x2A130Cu;
    // 0x2a130c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A130Cu;
    {
        const bool branch_taken_0x2a130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A130Cu;
            // 0x2a1310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a130c) {
            ctx->pc = 0x2A138Cu;
            goto label_2a138c;
        }
    }
    ctx->pc = 0x2A1314u;
label_2a1314:
    // 0x2a1314: 0xc0a8a7c  jal         func_2A29F0
    ctx->pc = 0x2A1314u;
    SET_GPR_U32(ctx, 31, 0x2A131Cu);
    ctx->pc = 0x2A29F0u;
    if (runtime->hasFunction(0x2A29F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A29F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A131Cu; }
        if (ctx->pc != 0x2A131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleMCCheckInit__Fi_0x2a29f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A131Cu; }
        if (ctx->pc != 0x2A131Cu) { return; }
    }
    ctx->pc = 0x2A131Cu;
label_2a131c:
    // 0x2a131c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1320: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A1320u;
    {
        const bool branch_taken_0x2a1320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1320u;
            // 0x2a1324: 0xa782999c  sh          $v0, -0x6664($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941084), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1320) {
            ctx->pc = 0x2A1388u;
            goto label_2a1388;
        }
    }
    ctx->pc = 0x2A1328u;
label_2a1328:
    // 0x2a1328: 0xc0a8ab4  jal         func_2A2AD0
    ctx->pc = 0x2A1328u;
    SET_GPR_U32(ctx, 31, 0x2A1330u);
    ctx->pc = 0x2A2AD0u;
    if (runtime->hasFunction(0x2A2AD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A2AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1330u; }
        if (ctx->pc != 0x2A1330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleMCCheckKey__Fv_0x2a2ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1330u; }
        if (ctx->pc != 0x2A1330u) { return; }
    }
    ctx->pc = 0x2A1330u;
label_2a1330:
    // 0x2a1330: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A1330u;
    {
        const bool branch_taken_0x2a1330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1330) {
            ctx->pc = 0x2A1388u;
            goto label_2a1388;
        }
    }
    ctx->pc = 0x2A1338u;
    // 0x2a1338: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a1338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a133c: 0xaf8099a4  sw          $zero, -0x665C($gp)
    ctx->pc = 0x2a133cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941092), GPR_U32(ctx, 0));
    // 0x2a1340: 0xa3809998  sb          $zero, -0x6668($gp)
    ctx->pc = 0x2a1340u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941080), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1344: 0xa7809994  sh          $zero, -0x666C($gp)
    ctx->pc = 0x2a1344u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941076), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a1348: 0xac4004c8  sw          $zero, 0x4C8($v0)
    ctx->pc = 0x2a1348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 0));
    // 0x2a134c: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a134cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a1350: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2A1350u;
    SET_GPR_U32(ctx, 31, 0x2A1358u);
    ctx->pc = 0x2A1354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1350u;
            // 0x2a1354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1358u; }
        if (ctx->pc != 0x2A1358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1358u; }
        if (ctx->pc != 0x2A1358u) { return; }
    }
    ctx->pc = 0x2A1358u;
label_2a1358:
    // 0x2a1358: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a135c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a1360: 0xa460000a  sh          $zero, 0xA($v1)
    ctx->pc = 0x2a1360u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a1364: 0x878399a8  lh          $v1, -0x6658($gp)
    ctx->pc = 0x2a1364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941096)));
    // 0x2a1368: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1368u;
    {
        const bool branch_taken_0x2a1368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1368u;
            // 0x2a136c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1368) {
            ctx->pc = 0x2A1388u;
            goto label_2a1388;
        }
    }
    ctx->pc = 0x2A1370u;
    // 0x2a1370: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a1370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1374: 0xa78299a8  sh          $v0, -0x6658($gp)
    ctx->pc = 0x2a1374u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a1378: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a137c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x2a137cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1380: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1384: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2a1384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2a1388:
    // 0x2a1388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a1388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a138c:
    // 0x2a138c: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x2A138Cu;
    {
        const bool branch_taken_0x2a138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a138c) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A1394u;
label_2a1394:
    // 0x2a1394: 0xc0bc7f0  jal         func_2F1FC0
    ctx->pc = 0x2A1394u;
    SET_GPR_U32(ctx, 31, 0x2A139Cu);
    ctx->pc = 0x2F1FC0u;
    if (runtime->hasFunction(0x2F1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A139Cu; }
        if (ctx->pc != 0x2A139Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CMemoryCardManagerFv_0x2f1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A139Cu; }
        if (ctx->pc != 0x2A139Cu) { return; }
    }
    ctx->pc = 0x2A139Cu;
label_2a139c:
    // 0x2a139c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a139cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13a0: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x2a13a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2a13a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a13a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13a8: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2A13A8u;
    SET_GPR_U32(ctx, 31, 0x2A13B0u);
    ctx->pc = 0x2A13ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13A8u;
            // 0x2a13ac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13B0u; }
        if (ctx->pc != 0x2A13B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13B0u; }
        if (ctx->pc != 0x2A13B0u) { return; }
    }
    ctx->pc = 0x2A13B0u;
label_2a13b0:
    // 0x2a13b0: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A13B0u;
    {
        const bool branch_taken_0x2a13b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A13B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13B0u;
            // 0x2a13b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13b0) {
            ctx->pc = 0x2A13C0u;
            goto label_2a13c0;
        }
    }
    ctx->pc = 0x2A13B8u;
    // 0x2a13b8: 0xa3808468  sb          $zero, -0x7B98($gp)
    ctx->pc = 0x2a13b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935656), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a13bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a13bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a13c0:
    // 0x2a13c0: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2A13C0u;
    SET_GPR_U32(ctx, 31, 0x2A13C8u);
    ctx->pc = 0x2A13C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13C0u;
            // 0x2a13c4: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13C8u; }
        if (ctx->pc != 0x2A13C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13C8u; }
        if (ctx->pc != 0x2A13C8u) { return; }
    }
    ctx->pc = 0x2A13C8u;
label_2a13c8:
    // 0x2a13c8: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A13C8u;
    {
        const bool branch_taken_0x2a13c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A13CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13C8u;
            // 0x2a13cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13c8) {
            ctx->pc = 0x2A13E4u;
            goto label_2a13e4;
        }
    }
    ctx->pc = 0x2A13D0u;
    // 0x2a13d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a13d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13d4: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A13D4u;
    SET_GPR_U32(ctx, 31, 0x2A13DCu);
    ctx->pc = 0x2A13D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13D4u;
            // 0x2a13d8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13DCu; }
        if (ctx->pc != 0x2A13DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A13DCu; }
        if (ctx->pc != 0x2A13DCu) { return; }
    }
    ctx->pc = 0x2A13DCu;
label_2a13dc:
    // 0x2a13dc: 0xa3808469  sb          $zero, -0x7B97($gp)
    ctx->pc = 0x2a13dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935657), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a13e0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a13e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a13e4:
    // 0x2a13e4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A13E4u;
    {
        const bool branch_taken_0x2a13e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13E4u;
            // 0x2a13e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13e4) {
            ctx->pc = 0x2A1400u;
            goto label_2a1400;
        }
    }
    ctx->pc = 0x2A13ECu;
    // 0x2a13ec: 0xa780999c  sh          $zero, -0x6664($gp)
    ctx->pc = 0x2a13ecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941084), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a13f0: 0xa3829998  sb          $v0, -0x6668($gp)
    ctx->pc = 0x2a13f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941080), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a13f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a13f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13f8: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x2A13F8u;
    {
        const bool branch_taken_0x2a13f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A13F8u;
            // 0x2a13fc: 0xa7809994  sh          $zero, -0x666C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941076), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13f8) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A1400u;
label_2a1400:
    // 0x2a1400: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1400u;
    {
        const bool branch_taken_0x2a1400 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1400) {
            ctx->pc = 0x2A1438u;
            goto label_2a1438;
        }
    }
    ctx->pc = 0x2A1408u;
    // 0x2a1408: 0x87829994  lh          $v0, -0x666C($gp)
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941076)));
    // 0x2a140c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A140Cu;
    {
        const bool branch_taken_0x2a140c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A140Cu;
            // 0x2a1410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a140c) {
            ctx->pc = 0x2A141Cu;
            goto label_2a141c;
        }
    }
    ctx->pc = 0x2A1414u;
    // 0x2a1414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1414u;
    {
        const bool branch_taken_0x2a1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1414u;
            // 0x2a1418: 0xa7829994  sh          $v0, -0x666C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1414) {
            ctx->pc = 0x2A1420u;
            goto label_2a1420;
        }
    }
    ctx->pc = 0x2A141Cu;
label_2a141c:
    // 0x2a141c: 0xa7809994  sh          $zero, -0x666C($gp)
    ctx->pc = 0x2a141cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941076), (uint16_t)GPR_U32(ctx, 0));
label_2a1420:
    // 0x2a1420: 0x87839994  lh          $v1, -0x666C($gp)
    ctx->pc = 0x2a1420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941076)));
    // 0x2a1424: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a1428: 0xac4304c8  sw          $v1, 0x4C8($v0)
    ctx->pc = 0x2a1428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 3));
    // 0x2a142c: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a142cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a1430: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2A1430u;
    SET_GPR_U32(ctx, 31, 0x2A1438u);
    ctx->pc = 0x2A1434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1430u;
            // 0x2a1434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1438u; }
        if (ctx->pc != 0x2A1438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1438u; }
        if (ctx->pc != 0x2A1438u) { return; }
    }
    ctx->pc = 0x2A1438u;
label_2a1438:
    // 0x2a1438: 0xc08f86c  jal         func_23E1B0
    ctx->pc = 0x2A1438u;
    SET_GPR_U32(ctx, 31, 0x2A1440u);
    ctx->pc = 0x23E1B0u;
    if (runtime->hasFunction(0x23E1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1440u; }
        if (ctx->pc != 0x2A1440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckPushButton__Fv_0x23e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1440u; }
        if (ctx->pc != 0x2A1440u) { return; }
    }
    ctx->pc = 0x2A1440u;
label_2a1440:
    // 0x2a1440: 0xc08f8b8  jal         func_23E2E0
    ctx->pc = 0x2A1440u;
    SET_GPR_U32(ctx, 31, 0x2A1448u);
    ctx->pc = 0x2A1444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1440u;
            // 0x2a1444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E2E0u;
    if (runtime->hasFunction(0x23E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1448u; }
        if (ctx->pc != 0x2A1448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCheckPushButton__Fi_0x23e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1448u; }
        if (ctx->pc != 0x2A1448u) { return; }
    }
    ctx->pc = 0x2A1448u;
label_2a1448:
    // 0x2a1448: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a1448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a144c: 0x878299a8  lh          $v0, -0x6658($gp)
    ctx->pc = 0x2a144cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941096)));
    // 0x2a1450: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1450u;
    {
        const bool branch_taken_0x2a1450 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A1454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1450u;
            // 0x2a1454: 0x32510010  andi        $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1450) {
            ctx->pc = 0x2A1468u;
            goto label_2a1468;
        }
    }
    ctx->pc = 0x2A1458u;
    // 0x2a1458: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a145c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2a145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2a1460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a1464: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2a1464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_2a1468:
    // 0x2a1468: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1468u;
    {
        const bool branch_taken_0x2a1468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1468u;
            // 0x2a146c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1468) {
            ctx->pc = 0x2A1474u;
            goto label_2a1474;
        }
    }
    ctx->pc = 0x2A1470u;
    // 0x2a1470: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a1470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1474:
    // 0x2a1474: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a1474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a1478: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A1478u;
    SET_GPR_U32(ctx, 31, 0x2A1480u);
    ctx->pc = 0x2A147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1478u;
            // 0x2a147c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1480u; }
        if (ctx->pc != 0x2A1480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1480u; }
        if (ctx->pc != 0x2A1480u) { return; }
    }
    ctx->pc = 0x2A1480u;
label_2a1480:
    // 0x2a1480: 0x878599a8  lh          $a1, -0x6658($gp)
    ctx->pc = 0x2a1480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941096)));
    // 0x2a1484: 0x20a30002  addi        $v1, $a1, 0x2
    ctx->pc = 0x2a1484u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x2a1488: 0x2c61000e  sltiu       $at, $v1, 0xE
    ctx->pc = 0x2a1488u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2a148c: 0x10200199  beqz        $at, . + 4 + (0x199 << 2)
    ctx->pc = 0x2A148Cu;
    {
        const bool branch_taken_0x2a148c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A148Cu;
            // 0x2a1490: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a148c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1494u;
    // 0x2a1494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a1494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a1498: 0x2484e1b0  addiu       $a0, $a0, -0x1E50
    ctx->pc = 0x2a1498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959536));
    // 0x2a149c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a14a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a14a4: 0x600008  jr          $v1
    ctx->pc = 0x2A14A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A14ACu: goto label_2a14ac;
            case 0x2A1504u: goto label_2a1504;
            case 0x2A158Cu: goto label_2a158c;
            case 0x2A161Cu: goto label_2a161c;
            case 0x2A194Cu: goto label_2a194c;
            case 0x2A195Cu: goto label_2a195c;
            case 0x2A196Cu: goto label_2a196c;
            case 0x2A199Cu: goto label_2a199c;
            case 0x2A19ACu: goto label_2a19ac;
            case 0x2A1AF4u: goto label_2a1af4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A14ACu;
label_2a14ac:
    // 0x2a14ac: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A14ACu;
    {
        const bool branch_taken_0x2a14ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A14B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A14ACu;
            // 0x2a14b0: 0xa78099ac  sh          $zero, -0x6654($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14ac) {
            ctx->pc = 0x2A14DCu;
            goto label_2a14dc;
        }
    }
    ctx->pc = 0x2A14B4u;
    // 0x2a14b4: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a14b8: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2a14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2a14bc: 0xa78099a8  sh          $zero, -0x6658($gp)
    ctx->pc = 0x2a14bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a14c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a14c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a14c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14cc: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x2a14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x2a14d0: 0x8f8499f0  lw          $a0, -0x6610($gp)
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941168)));
    // 0x2a14d4: 0xc063818  jal         func_18E060
    ctx->pc = 0x2A14D4u;
    SET_GPR_U32(ctx, 31, 0x2A14DCu);
    ctx->pc = 0x2A14D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A14D4u;
            // 0x2a14d8: 0xa78299ac  sh          $v0, -0x6654($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A14DCu; }
        if (ctx->pc != 0x2A14DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A14DCu; }
        if (ctx->pc != 0x2A14DCu) { return; }
    }
    ctx->pc = 0x2A14DCu;
label_2a14dc:
    // 0x2a14dc: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a14dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a14e0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a14e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a14e8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2a14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2a14ec: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a14f0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2a14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a14f4: 0x1c40017f  bgtz        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x2A14F4u;
    {
        const bool branch_taken_0x2a14f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A14F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A14F4u;
            // 0x2a14f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14f4) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A14FCu;
    // 0x2a14fc: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x2A14FCu;
    {
        const bool branch_taken_0x2a14fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A14FCu;
            // 0x2a1500: 0xa78299a8  sh          $v0, -0x6658($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14fc) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1504u;
label_2a1504:
    // 0x2a1504: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a1504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a1508: 0xa78099ac  sh          $zero, -0x6654($gp)
    ctx->pc = 0x2a1508u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a150c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a150cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1510: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1514: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2a1514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1518: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x2a1518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a151c: 0x0  nop
    ctx->pc = 0x2a151cu;
    // NOP
    // 0x2a1520: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1520u;
    {
        const bool branch_taken_0x2a1520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1520u;
            // 0x2a1524: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1520) {
            ctx->pc = 0x2A153Cu;
            goto label_2a153c;
        }
    }
    ctx->pc = 0x2A1528u;
    // 0x2a1528: 0x3c023f07  lui         $v0, 0x3F07
    ctx->pc = 0x2a1528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16135 << 16));
    // 0x2a152c: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x2a152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
    // 0x2a1530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1534: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A1534u;
    SET_GPR_U32(ctx, 31, 0x2A153Cu);
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A153Cu; }
        if (ctx->pc != 0x2A153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A153Cu; }
        if (ctx->pc != 0x2A153Cu) { return; }
    }
    ctx->pc = 0x2A153Cu;
label_2a153c:
    // 0x2a153c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A153Cu;
    {
        const bool branch_taken_0x2a153c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a153c) {
            ctx->pc = 0x2A1560u;
            goto label_2a1560;
        }
    }
    ctx->pc = 0x2A1544u;
    // 0x2a1544: 0x8f8499f0  lw          $a0, -0x6610($gp)
    ctx->pc = 0x2a1544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941168)));
    // 0x2a1548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a154c: 0xc063818  jal         func_18E060
    ctx->pc = 0x2A154Cu;
    SET_GPR_U32(ctx, 31, 0x2A1554u);
    ctx->pc = 0x2A1550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A154Cu;
            // 0x2a1550: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1554u; }
        if (ctx->pc != 0x2A1554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1554u; }
        if (ctx->pc != 0x2A1554u) { return; }
    }
    ctx->pc = 0x2A1554u;
label_2a1554:
    // 0x2a1554: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1558: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a1558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a155c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2a155cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_2a1560:
    // 0x2a1560: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1564: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a1564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a1568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a156c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2a156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1570: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a1570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1574: 0x0  nop
    ctx->pc = 0x2a1574u;
    // NOP
    // 0x2a1578: 0x4500015e  bc1f        . + 4 + (0x15E << 2)
    ctx->pc = 0x2A1578u;
    {
        const bool branch_taken_0x2a1578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1578u;
            // 0x2a157c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1578) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1580u;
    // 0x2a1580: 0xa78099a8  sh          $zero, -0x6658($gp)
    ctx->pc = 0x2a1580u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a1584: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x2A1584u;
    {
        const bool branch_taken_0x2a1584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1584u;
            // 0x2a1588: 0xa78299ac  sh          $v0, -0x6654($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1584) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A158Cu;
label_2a158c:
    // 0x2a158c: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a158cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1590: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x2a1590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x2a1594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1598: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a1598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a159c: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A159Cu;
    SET_GPR_U32(ctx, 31, 0x2A15A4u);
    ctx->pc = 0x2A15A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A159Cu;
            // 0x2a15a0: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15A4u; }
        if (ctx->pc != 0x2A15A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15A4u; }
        if (ctx->pc != 0x2A15A4u) { return; }
    }
    ctx->pc = 0x2A15A4u;
label_2a15a4:
    // 0x2a15a4: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a15a8: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x2a15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x2a15ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a15acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a15b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a15b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a15b4: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A15B4u;
    SET_GPR_U32(ctx, 31, 0x2A15BCu);
    ctx->pc = 0x2A15B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A15B4u;
            // 0x2a15b8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15BCu; }
        if (ctx->pc != 0x2A15BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15BCu; }
        if (ctx->pc != 0x2A15BCu) { return; }
    }
    ctx->pc = 0x2A15BCu;
label_2a15bc:
    // 0x2a15bc: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a15c0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2a15c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a15c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a15c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a15cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a15ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a15d0: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A15D0u;
    SET_GPR_U32(ctx, 31, 0x2A15D8u);
    ctx->pc = 0x2A15D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A15D0u;
            // 0x2a15d4: 0x2464001c  addiu       $a0, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15D8u; }
        if (ctx->pc != 0x2A15D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15D8u; }
        if (ctx->pc != 0x2A15D8u) { return; }
    }
    ctx->pc = 0x2A15D8u;
label_2a15d8:
    // 0x2a15d8: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a15dc: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x2a15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x2a15e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a15e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a15e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a15e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a15e8: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A15E8u;
    SET_GPR_U32(ctx, 31, 0x2A15F0u);
    ctx->pc = 0x2A15ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A15E8u;
            // 0x2a15ec: 0x24640024  addiu       $a0, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15F0u; }
        if (ctx->pc != 0x2A15F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A15F0u; }
        if (ctx->pc != 0x2A15F0u) { return; }
    }
    ctx->pc = 0x2A15F0u;
label_2a15f0:
    // 0x2a15f0: 0x12000140  beqz        $s0, . + 4 + (0x140 << 2)
    ctx->pc = 0x2A15F0u;
    {
        const bool branch_taken_0x2a15f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a15f0) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A15F8u;
    // 0x2a15f8: 0x8f8499f0  lw          $a0, -0x6610($gp)
    ctx->pc = 0x2a15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941168)));
    // 0x2a15fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a15fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1600: 0xc063818  jal         func_18E060
    ctx->pc = 0x2A1600u;
    SET_GPR_U32(ctx, 31, 0x2A1608u);
    ctx->pc = 0x2A1604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1600u;
            // 0x2a1604: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1608u; }
        if (ctx->pc != 0x2A1608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1608u; }
        if (ctx->pc != 0x2A1608u) { return; }
    }
    ctx->pc = 0x2A1608u;
label_2a1608:
    // 0x2a1608: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a160c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1610: 0xa78399a8  sh          $v1, -0x6658($gp)
    ctx->pc = 0x2a1610u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1614: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x2A1614u;
    {
        const bool branch_taken_0x2a1614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1614u;
            // 0x2a1618: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1614) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A161Cu;
label_2a161c:
    // 0x2a161c: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x2a161cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x2a1620: 0xa78099ac  sh          $zero, -0x6654($gp)
    ctx->pc = 0x2a1620u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a1624: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1628: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a1628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a162c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1630: 0x84500008  lh          $s0, 0x8($v0)
    ctx->pc = 0x2a1630u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a1634: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A1634u;
    SET_GPR_U32(ctx, 31, 0x2A163Cu);
    ctx->pc = 0x2A1638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1634u;
            // 0x2a1638: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A163Cu; }
        if (ctx->pc != 0x2A163Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A163Cu; }
        if (ctx->pc != 0x2A163Cu) { return; }
    }
    ctx->pc = 0x2A163Cu;
label_2a163c:
    // 0x2a163c: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1640: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2a1640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2a1644: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1648: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a1648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a164c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a164cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1650: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A1650u;
    SET_GPR_U32(ctx, 31, 0x2A1658u);
    ctx->pc = 0x2A1654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1650u;
            // 0x2a1654: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1658u; }
        if (ctx->pc != 0x2A1658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1658u; }
        if (ctx->pc != 0x2A1658u) { return; }
    }
    ctx->pc = 0x2A1658u;
label_2a1658:
    // 0x2a1658: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a165c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2a165cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2a1660: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1664: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a1664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a1668: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a166c: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A166Cu;
    SET_GPR_U32(ctx, 31, 0x2A1674u);
    ctx->pc = 0x2A1670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A166Cu;
            // 0x2a1670: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1674u; }
        if (ctx->pc != 0x2A1674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1674u; }
        if (ctx->pc != 0x2A1674u) { return; }
    }
    ctx->pc = 0x2A1674u;
label_2a1674:
    // 0x2a1674: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a1674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a1678: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2a1678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2a167c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A167Cu;
    SET_GPR_U32(ctx, 31, 0x2A1684u);
    ctx->pc = 0x2A1680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A167Cu;
            // 0x2a1680: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1684u; }
        if (ctx->pc != 0x2A1684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1684u; }
        if (ctx->pc != 0x2A1684u) { return; }
    }
    ctx->pc = 0x2A1684u;
label_2a1684:
    // 0x2a1684: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1684u;
    {
        const bool branch_taken_0x2a1684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1684u;
            // 0x2a1688: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1684) {
            ctx->pc = 0x2A169Cu;
            goto label_2a169c;
        }
    }
    ctx->pc = 0x2A168Cu;
    // 0x2a168c: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1690: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x2a1690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a1694: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1698: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x2a1698u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
label_2a169c:
    // 0x2a169c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2a169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a16a0: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A16A0u;
    SET_GPR_U32(ctx, 31, 0x2A16A8u);
    ctx->pc = 0x2A16A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A16A0u;
            // 0x2a16a4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A16A8u; }
        if (ctx->pc != 0x2A16A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A16A8u; }
        if (ctx->pc != 0x2A16A8u) { return; }
    }
    ctx->pc = 0x2A16A8u;
label_2a16a8:
    // 0x2a16a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A16A8u;
    {
        const bool branch_taken_0x2a16a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a16a8) {
            ctx->pc = 0x2A16C0u;
            goto label_2a16c0;
        }
    }
    ctx->pc = 0x2A16B0u;
    // 0x2a16b0: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a16b4: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x2a16b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a16b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a16bc: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x2a16bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
label_2a16c0:
    // 0x2a16c0: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a16c4: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2a16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a16c8: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2a16c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a16cc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A16CCu;
    {
        const bool branch_taken_0x2a16cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a16cc) {
            ctx->pc = 0x2A16D8u;
            goto label_2a16d8;
        }
    }
    ctx->pc = 0x2A16D4u;
    // 0x2a16d4: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2a16d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_2a16d8:
    // 0x2a16d8: 0x93828460  lbu         $v0, -0x7BA0($gp)
    ctx->pc = 0x2a16d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x2a16dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A16DCu;
    {
        const bool branch_taken_0x2a16dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a16dc) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A16E4u;
    // 0x2a16e4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a16e8: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2a16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a16ec: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2a16ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a16f0: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x2a16f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a16f4: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2A16F4u;
    {
        const bool branch_taken_0x2a16f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A16F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A16F4u;
            // 0x2a16f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16f4) {
            ctx->pc = 0x2A1720u;
            goto label_2a1720;
        }
    }
    ctx->pc = 0x2A16FCu;
    // 0x2a16fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A16FCu;
    {
        const bool branch_taken_0x2a16fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A16FCu;
            // 0x2a1700: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16fc) {
            ctx->pc = 0x2A1720u;
            goto label_2a1720;
        }
    }
    ctx->pc = 0x2A1704u;
label_2a1704:
    // 0x2a1704: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1708: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2a1708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a170c: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2a170cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a1710: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2a1710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a1714: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1714u;
    {
        const bool branch_taken_0x2a1714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1714u;
            // 0x2a1718: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1714) {
            ctx->pc = 0x2A1720u;
            goto label_2a1720;
        }
    }
    ctx->pc = 0x2A171Cu;
    // 0x2a171c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2a171cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2a1720:
    // 0x2a1720: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1724: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2a1724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a1728: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1728u;
    {
        const bool branch_taken_0x2a1728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1728u;
            // 0x2a172c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1728) {
            ctx->pc = 0x2A1744u;
            goto label_2a1744;
        }
    }
    ctx->pc = 0x2A1730u;
    // 0x2a1730: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1730u;
    SET_GPR_U32(ctx, 31, 0x2A1738u);
    ctx->pc = 0x2A1734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1730u;
            // 0x2a1734: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1738u; }
        if (ctx->pc != 0x2A1738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1738u; }
        if (ctx->pc != 0x2A1738u) { return; }
    }
    ctx->pc = 0x2A1738u;
label_2a1738:
    // 0x2a1738: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a173c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2a173cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2a1740: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2a1740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2a1744:
    // 0x2a1744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1744u;
    {
        const bool branch_taken_0x2a1744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1744) {
            ctx->pc = 0x2A1754u;
            goto label_2a1754;
        }
    }
    ctx->pc = 0x2A174Cu;
    // 0x2a174c: 0x12200079  beqz        $s1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2A174Cu;
    {
        const bool branch_taken_0x2a174c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A174Cu;
            // 0x2a1750: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a174c) {
            ctx->pc = 0x2A1934u;
            goto label_2a1934;
        }
    }
    ctx->pc = 0x2A1754u;
label_2a1754:
    // 0x2a1754: 0x8f86997c  lw          $a2, -0x6684($gp)
    ctx->pc = 0x2a1754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1758: 0x84c50008  lh          $a1, 0x8($a2)
    ctx->pc = 0x2a1758u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a175c: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A175Cu;
    {
        const bool branch_taken_0x2a175c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A175Cu;
            // 0x2a1760: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a175c) {
            ctx->pc = 0x2A17A8u;
            goto label_2a17a8;
        }
    }
    ctx->pc = 0x2A1764u;
    // 0x2a1764: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a1768: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a176c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1770: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2a1770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a1774: 0xa78399a8  sh          $v1, -0x6658($gp)
    ctx->pc = 0x2a1774u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1778: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a1778u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a177c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a177cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1780: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A1780u;
    SET_GPR_U32(ctx, 31, 0x2A1788u);
    ctx->pc = 0x2A1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1780u;
            // 0x2a1784: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1788u; }
        if (ctx->pc != 0x2A1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1788u; }
        if (ctx->pc != 0x2A1788u) { return; }
    }
    ctx->pc = 0x2A1788u;
label_2a1788:
    // 0x2a1788: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1788u;
    SET_GPR_U32(ctx, 31, 0x2A1790u);
    ctx->pc = 0x2A178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1788u;
            // 0x2a178c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1790u; }
        if (ctx->pc != 0x2A1790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1790u; }
        if (ctx->pc != 0x2A1790u) { return; }
    }
    ctx->pc = 0x2A1790u;
label_2a1790:
    // 0x2a1790: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1794: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a1794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a1798: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x2a1798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x2a179c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a17a0: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2A17A0u;
    {
        const bool branch_taken_0x2a17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17A0u;
            // 0x2a17a4: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17a0) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A17A8u;
label_2a17a8:
    // 0x2a17a8: 0x14a4000e  bne         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A17A8u;
    {
        const bool branch_taken_0x2a17a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A17ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17A8u;
            // 0x2a17ac: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17a8) {
            ctx->pc = 0x2A17E4u;
            goto label_2a17e4;
        }
    }
    ctx->pc = 0x2A17B0u;
    // 0x2a17b0: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a17b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a17b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a17b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a17bc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2a17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a17c0: 0xa78399a8  sh          $v1, -0x6658($gp)
    ctx->pc = 0x2a17c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a17c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a17c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a17c8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a17c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a17cc: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A17CCu;
    SET_GPR_U32(ctx, 31, 0x2A17D4u);
    ctx->pc = 0x2A17D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17CCu;
            // 0x2a17d0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A17D4u; }
        if (ctx->pc != 0x2A17D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A17D4u; }
        if (ctx->pc != 0x2A17D4u) { return; }
    }
    ctx->pc = 0x2A17D4u;
label_2a17d4:
    // 0x2a17d4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A17D4u;
    SET_GPR_U32(ctx, 31, 0x2A17DCu);
    ctx->pc = 0x2A17D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17D4u;
            // 0x2a17d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A17DCu; }
        if (ctx->pc != 0x2A17DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A17DCu; }
        if (ctx->pc != 0x2A17DCu) { return; }
    }
    ctx->pc = 0x2A17DCu;
label_2a17dc:
    // 0x2a17dc: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x2A17DCu;
    {
        const bool branch_taken_0x2a17dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17DCu;
            // 0x2a17e0: 0x8f82997c  lw          $v0, -0x6684($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17dc) {
            ctx->pc = 0x2A1AF8u;
            goto label_2a1af8;
        }
    }
    ctx->pc = 0x2A17E4u;
label_2a17e4:
    // 0x2a17e4: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A17E4u;
    {
        const bool branch_taken_0x2a17e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A17E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17E4u;
            // 0x2a17e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17e4) {
            ctx->pc = 0x2A1844u;
            goto label_2a1844;
        }
    }
    ctx->pc = 0x2A17ECu;
    // 0x2a17ec: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a17ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a17f0: 0x8c2262d0  lw          $v0, 0x62D0($at)
    ctx->pc = 0x2a17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25296)));
    // 0x2a17f4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a17f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a17f8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2A17F8u;
    {
        const bool branch_taken_0x2a17f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A17F8u;
            // 0x2a17fc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17f8) {
            ctx->pc = 0x2A1834u;
            goto label_2a1834;
        }
    }
    ctx->pc = 0x2A1800u;
    // 0x2a1800: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a1804: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1808: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a1808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a180c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2a180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a1810: 0xa78399a8  sh          $v1, -0x6658($gp)
    ctx->pc = 0x2a1810u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1814: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a1814u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1818: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a1818u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a181c: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A181Cu;
    SET_GPR_U32(ctx, 31, 0x2A1824u);
    ctx->pc = 0x2A1820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A181Cu;
            // 0x2a1820: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1824u; }
        if (ctx->pc != 0x2A1824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1824u; }
        if (ctx->pc != 0x2A1824u) { return; }
    }
    ctx->pc = 0x2A1824u;
label_2a1824:
    // 0x2a1824: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1824u;
    SET_GPR_U32(ctx, 31, 0x2A182Cu);
    ctx->pc = 0x2A1828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1824u;
            // 0x2a1828: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A182Cu; }
        if (ctx->pc != 0x2A182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A182Cu; }
        if (ctx->pc != 0x2A182Cu) { return; }
    }
    ctx->pc = 0x2A182Cu;
label_2a182c:
    // 0x2a182c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2A182Cu;
    {
        const bool branch_taken_0x2a182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a182c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1834u;
label_2a1834:
    // 0x2a1834: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1834u;
    SET_GPR_U32(ctx, 31, 0x2A183Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A183Cu; }
        if (ctx->pc != 0x2A183Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A183Cu; }
        if (ctx->pc != 0x2A183Cu) { return; }
    }
    ctx->pc = 0x2A183Cu;
label_2a183c:
    // 0x2a183c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x2A183Cu;
    {
        const bool branch_taken_0x2a183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a183c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1844u;
label_2a1844:
    // 0x2a1844: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1844u;
    {
        const bool branch_taken_0x2a1844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1844u;
            // 0x2a1848: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1844) {
            ctx->pc = 0x2A187Cu;
            goto label_2a187c;
        }
    }
    ctx->pc = 0x2A184Cu;
    // 0x2a184c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a1850: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1854: 0xa78399a8  sh          $v1, -0x6658($gp)
    ctx->pc = 0x2a1854u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1858: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2a1858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a185c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a185cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1860: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a1860u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1864: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A1864u;
    SET_GPR_U32(ctx, 31, 0x2A186Cu);
    ctx->pc = 0x2A1868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1864u;
            // 0x2a1868: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A186Cu; }
        if (ctx->pc != 0x2A186Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A186Cu; }
        if (ctx->pc != 0x2A186Cu) { return; }
    }
    ctx->pc = 0x2A186Cu;
label_2a186c:
    // 0x2a186c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A186Cu;
    SET_GPR_U32(ctx, 31, 0x2A1874u);
    ctx->pc = 0x2A1870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A186Cu;
            // 0x2a1870: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1874u; }
        if (ctx->pc != 0x2A1874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1874u; }
        if (ctx->pc != 0x2A1874u) { return; }
    }
    ctx->pc = 0x2A1874u;
label_2a1874:
    // 0x2a1874: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2A1874u;
    {
        const bool branch_taken_0x2a1874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1874) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A187Cu;
label_2a187c:
    // 0x2a187c: 0x14a20029  bne         $a1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A187Cu;
    {
        const bool branch_taken_0x2a187c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a187c) {
            ctx->pc = 0x2A1924u;
            goto label_2a1924;
        }
    }
    ctx->pc = 0x2A1884u;
    // 0x2a1884: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a1884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a1888: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A1888u;
    {
        const bool branch_taken_0x2a1888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A188Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1888u;
            // 0x2a188c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1888) {
            ctx->pc = 0x2A1924u;
            goto label_2a1924;
        }
    }
    ctx->pc = 0x2A1890u;
    // 0x2a1890: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a1890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a1894: 0xa78399a8  sh          $v1, -0x6658($gp)
    ctx->pc = 0x2a1894u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1898: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x2a1898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
    // 0x2a189c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a189cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a18a0: 0xa440000a  sh          $zero, 0xA($v0)
    ctx->pc = 0x2a18a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a18a4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a18a8: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x2a18a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a18ac: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a18b0: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x2a18b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a18b4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a18b8: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x2a18b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a18bc: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a18c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a18c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a18c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A18C4u;
    {
        const bool branch_taken_0x2a18c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a18c4) {
            ctx->pc = 0x2A18E4u;
            goto label_2a18e4;
        }
    }
    ctx->pc = 0x2A18CCu;
    // 0x2a18cc: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a18d0: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x2a18d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a18d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a18d8: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x2a18d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a18dc: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a18e0: 0xa444000c  sh          $a0, 0xC($v0)
    ctx->pc = 0x2a18e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 4));
label_2a18e4:
    // 0x2a18e4: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a18e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a18e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a18ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A18ECu;
    {
        const bool branch_taken_0x2a18ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A18ECu;
            // 0x2a18f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18ec) {
            ctx->pc = 0x2A1914u;
            goto label_2a1914;
        }
    }
    ctx->pc = 0x2A18F4u;
    // 0x2a18f4: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a18f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a18fc: 0x84820010  lh          $v0, 0x10($a0)
    ctx->pc = 0x2a18fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a1900: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a1904: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x2a1904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a1908: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a190c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2a190cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1914:
    // 0x2a1914: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1914u;
    SET_GPR_U32(ctx, 31, 0x2A191Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A191Cu; }
        if (ctx->pc != 0x2A191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A191Cu; }
        if (ctx->pc != 0x2A191Cu) { return; }
    }
    ctx->pc = 0x2A191Cu;
label_2a191c:
    // 0x2a191c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2A191Cu;
    {
        const bool branch_taken_0x2a191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a191c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1924u;
label_2a1924:
    // 0x2a1924: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1924u;
    SET_GPR_U32(ctx, 31, 0x2A192Cu);
    ctx->pc = 0x2A1928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1924u;
            // 0x2a1928: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A192Cu; }
        if (ctx->pc != 0x2A192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A192Cu; }
        if (ctx->pc != 0x2A192Cu) { return; }
    }
    ctx->pc = 0x2A192Cu;
label_2a192c:
    // 0x2a192c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2A192Cu;
    {
        const bool branch_taken_0x2a192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a192c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1934u;
label_2a1934:
    // 0x2a1934: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2A1934u;
    {
        const bool branch_taken_0x2a1934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1934u;
            // 0x2a1938: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1934) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A193Cu;
    // 0x2a193c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A193Cu;
    SET_GPR_U32(ctx, 31, 0x2A1944u);
    ctx->pc = 0x2A1940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A193Cu;
            // 0x2a1940: 0xa78099a8  sh          $zero, -0x6658($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1944u; }
        if (ctx->pc != 0x2A1944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1944u; }
        if (ctx->pc != 0x2A1944u) { return; }
    }
    ctx->pc = 0x2A1944u;
label_2a1944:
    // 0x2a1944: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2A1944u;
    {
        const bool branch_taken_0x2a1944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1944) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A194Cu;
label_2a194c:
    // 0x2a194c: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2A194Cu;
    {
        const bool branch_taken_0x2a194c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A194Cu;
            // 0x2a1950: 0xa78099ac  sh          $zero, -0x6654($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a194c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1954u;
    // 0x2a1954: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2A1954u;
    {
        const bool branch_taken_0x2a1954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1954u;
            // 0x2a1958: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1954) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A195Cu;
label_2a195c:
    // 0x2a195c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2A195Cu;
    {
        const bool branch_taken_0x2a195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A195Cu;
            // 0x2a1960: 0xa78099ac  sh          $zero, -0x6654($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a195c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1964u;
    // 0x2a1964: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2A1964u;
    {
        const bool branch_taken_0x2a1964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1964u;
            // 0x2a1968: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1964) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A196Cu;
label_2a196c:
    // 0x2a196c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2A196Cu;
    {
        const bool branch_taken_0x2a196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A196Cu;
            // 0x2a1970: 0xa78099ac  sh          $zero, -0x6654($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a196c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1974u;
    // 0x2a1974: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a1974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1978: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1978u;
    {
        const bool branch_taken_0x2a1978 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1978) {
            ctx->pc = 0x2A1988u;
            goto label_2a1988;
        }
    }
    ctx->pc = 0x2A1980u;
    // 0x2a1980: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2A1980u;
    {
        const bool branch_taken_0x2a1980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1980) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A1988u;
label_2a1988:
    // 0x2a1988: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a1988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a198c: 0x14a20059  bne         $a1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2A198Cu;
    {
        const bool branch_taken_0x2a198c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A198Cu;
            // 0x2a1990: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a198c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1994u;
    // 0x2a1994: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2A1994u;
    {
        const bool branch_taken_0x2a1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1994) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A199Cu;
label_2a199c:
    // 0x2a199c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2A199Cu;
    {
        const bool branch_taken_0x2a199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A19A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A199Cu;
            // 0x2a19a0: 0xa78099ac  sh          $zero, -0x6654($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a199c) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A19A4u;
    // 0x2a19a4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2A19A4u;
    {
        const bool branch_taken_0x2a19a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A19A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19A4u;
            // 0x2a19a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19a4) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A19ACu;
label_2a19ac:
    // 0x2a19ac: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x2a19acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x2a19b0: 0xa78099ac  sh          $zero, -0x6654($gp)
    ctx->pc = 0x2a19b0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a19b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a19b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a19b8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a19b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a19bc: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a19c0: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A19C0u;
    SET_GPR_U32(ctx, 31, 0x2A19C8u);
    ctx->pc = 0x2A19C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19C0u;
            // 0x2a19c4: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A19C8u; }
        if (ctx->pc != 0x2A19C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A19C8u; }
        if (ctx->pc != 0x2A19C8u) { return; }
    }
    ctx->pc = 0x2A19C8u;
label_2a19c8:
    // 0x2a19c8: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a19cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2a19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2a19d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a19d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a19d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a19d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a19d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a19dc: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2A19DCu;
    SET_GPR_U32(ctx, 31, 0x2A19E4u);
    ctx->pc = 0x2A19E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19DCu;
            // 0x2a19e0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A19E4u; }
        if (ctx->pc != 0x2A19E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A19E4u; }
        if (ctx->pc != 0x2A19E4u) { return; }
    }
    ctx->pc = 0x2A19E4u;
label_2a19e4:
    // 0x2a19e4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a19e8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a19ec: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2a19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2a19f0: 0x8450000a  lh          $s0, 0xA($v0)
    ctx->pc = 0x2a19f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2a19f4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A19F4u;
    SET_GPR_U32(ctx, 31, 0x2A19FCu);
    ctx->pc = 0x2A19F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19F4u;
            // 0x2a19f8: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A19FCu; }
        if (ctx->pc != 0x2A19FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A19FCu; }
        if (ctx->pc != 0x2A19FCu) { return; }
    }
    ctx->pc = 0x2A19FCu;
label_2a19fc:
    // 0x2a19fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A19FCu;
    {
        const bool branch_taken_0x2a19fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A19FCu;
            // 0x2a1a00: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19fc) {
            ctx->pc = 0x2A1A14u;
            goto label_2a1a14;
        }
    }
    ctx->pc = 0x2A1A04u;
    // 0x2a1a04: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1a08: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x2a1a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2a1a0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1a10: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x2a1a10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_2a1a14:
    // 0x2a1a14: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2a1a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a1a18: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A1A18u;
    SET_GPR_U32(ctx, 31, 0x2A1A20u);
    ctx->pc = 0x2A1A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1A18u;
            // 0x2a1a1c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1A20u; }
        if (ctx->pc != 0x2A1A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1A20u; }
        if (ctx->pc != 0x2A1A20u) { return; }
    }
    ctx->pc = 0x2A1A20u;
label_2a1a20:
    // 0x2a1a20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1A20u;
    {
        const bool branch_taken_0x2a1a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a20) {
            ctx->pc = 0x2A1A38u;
            goto label_2a1a38;
        }
    }
    ctx->pc = 0x2A1A28u;
    // 0x2a1a28: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1a2c: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x2a1a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2a1a30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a1a34: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x2a1a34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_2a1a38:
    // 0x2a1a38: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1a3c: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2a1a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2a1a40: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2a1a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2a1a44: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1A44u;
    {
        const bool branch_taken_0x2a1a44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a1a44) {
            ctx->pc = 0x2A1A50u;
            goto label_2a1a50;
        }
    }
    ctx->pc = 0x2A1A4Cu;
    // 0x2a1a4c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2a1a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_2a1a50:
    // 0x2a1a50: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1a54: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x2a1a54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a1a58: 0x2444000a  addiu       $a0, $v0, 0xA
    ctx->pc = 0x2a1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2a1a5c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2a1a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2a1a60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a1a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1a64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a1a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a1a68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1A68u;
    {
        const bool branch_taken_0x2a1a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1A68u;
            // 0x2a1a6c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a68) {
            ctx->pc = 0x2A1A74u;
            goto label_2a1a74;
        }
    }
    ctx->pc = 0x2A1A70u;
    // 0x2a1a70: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2a1a70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2a1a74:
    // 0x2a1a74: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1a78: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2a1a78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2a1a7c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1A7Cu;
    {
        const bool branch_taken_0x2a1a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1A7Cu;
            // 0x2a1a80: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a7c) {
            ctx->pc = 0x2A1A98u;
            goto label_2a1a98;
        }
    }
    ctx->pc = 0x2A1A84u;
    // 0x2a1a84: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1A84u;
    SET_GPR_U32(ctx, 31, 0x2A1A8Cu);
    ctx->pc = 0x2A1A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1A84u;
            // 0x2a1a88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1A8Cu; }
        if (ctx->pc != 0x2A1A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1A8Cu; }
        if (ctx->pc != 0x2A1A8Cu) { return; }
    }
    ctx->pc = 0x2A1A8Cu;
label_2a1a8c:
    // 0x2a1a8c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1a90: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2a1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2a1a94: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2a1a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2a1a98:
    // 0x2a1a98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A1A98u;
    {
        const bool branch_taken_0x2a1a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1A98u;
            // 0x2a1a9c: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a98) {
            ctx->pc = 0x2A1AD4u;
            goto label_2a1ad4;
        }
    }
    ctx->pc = 0x2A1AA0u;
    // 0x2a1aa0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1AA0u;
    SET_GPR_U32(ctx, 31, 0x2A1AA8u);
    ctx->pc = 0x2A1AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1AA0u;
            // 0x2a1aa4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1AA8u; }
        if (ctx->pc != 0x2A1AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1AA8u; }
        if (ctx->pc != 0x2A1AA8u) { return; }
    }
    ctx->pc = 0x2A1AA8u;
label_2a1aa8:
    // 0x2a1aa8: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a1aac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1ab0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2a1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a1ab4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2a1ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a1ab8: 0xa78399a8  sh          $v1, -0x6658($gp)
    ctx->pc = 0x2a1ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1abc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a1abcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1ac0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a1ac0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1ac4: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A1AC4u;
    SET_GPR_U32(ctx, 31, 0x2A1ACCu);
    ctx->pc = 0x2A1AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1AC4u;
            // 0x2a1ac8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1ACCu; }
        if (ctx->pc != 0x2A1ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1ACCu; }
        if (ctx->pc != 0x2A1ACCu) { return; }
    }
    ctx->pc = 0x2A1ACCu;
label_2a1acc:
    // 0x2a1acc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1ACCu;
    {
        const bool branch_taken_0x2a1acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1acc) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1AD4u;
label_2a1ad4:
    // 0x2a1ad4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1AD4u;
    {
        const bool branch_taken_0x2a1ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ad4) {
            ctx->pc = 0x2A1AF4u;
            goto label_2a1af4;
        }
    }
    ctx->pc = 0x2A1ADCu;
    // 0x2a1adc: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1ae4: 0xa78399a8  sh          $v1, -0x6658($gp)
    ctx->pc = 0x2a1ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1ae8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1aec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A1AECu;
    SET_GPR_U32(ctx, 31, 0x2A1AF4u);
    ctx->pc = 0x2A1AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1AECu;
            // 0x2a1af0: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1AF4u; }
        if (ctx->pc != 0x2A1AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1AF4u; }
        if (ctx->pc != 0x2A1AF4u) { return; }
    }
    ctx->pc = 0x2A1AF4u;
label_2a1af4:
    // 0x2a1af4: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a1af8:
    // 0x2a1af8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1afc: 0xc0a8a54  jal         func_2A2950
    ctx->pc = 0x2A1AFCu;
    SET_GPR_U32(ctx, 31, 0x2A1B04u);
    ctx->pc = 0x2A1B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1AFCu;
            // 0x2a1b00: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2950u;
    if (runtime->hasFunction(0x2A2950u)) {
        auto targetFn = runtime->lookupFunction(0x2A2950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B04u; }
        if (ctx->pc != 0x2A1B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPushAlpha__FiPf_0x2a2950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B04u; }
        if (ctx->pc != 0x2A1B04u) { return; }
    }
    ctx->pc = 0x2A1B04u;
label_2a1b04:
    // 0x2a1b04: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1b08: 0x8f82845c  lw          $v0, -0x7BA4($gp)
    ctx->pc = 0x2a1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x2a1b0c: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2a1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2a1b10: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1B10u;
    {
        const bool branch_taken_0x2a1b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B10u;
            // 0x2a1b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b10) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A1B18u;
    // 0x2a1b18: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a1b1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1b20: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2a1b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a1b24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a1b24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1b28: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a1b28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1b2c: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2A1B34u);
    ctx->pc = 0x2A1B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B2Cu;
            // 0x2a1b30: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B34u; }
        if (ctx->pc != 0x2A1B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B34u; }
        if (ctx->pc != 0x2A1B34u) { return; }
    }
    ctx->pc = 0x2A1B34u;
label_2a1b34:
    // 0x2a1b34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a1b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1b38:
    // 0x2a1b38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a1b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a1b3c:
    // 0x2a1b3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a1b3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1b40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a1b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1b50: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B50u;
            // 0x2a1b54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1B58u;
}
