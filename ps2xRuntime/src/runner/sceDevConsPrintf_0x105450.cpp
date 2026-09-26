#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsPrintf
// Address: 0x105450 - 0x1056a4
void sceDevConsPrintf_0x105450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsPrintf_0x105450");
#endif

    switch (ctx->pc) {
        case 0x105498u: goto label_105498;
        case 0x1054b8u: goto label_1054b8;
        case 0x105514u: goto label_105514;
        case 0x1055ccu: goto label_1055cc;
        case 0x1055dcu: goto label_1055dc;
        case 0x1055ecu: goto label_1055ec;
        case 0x1055fcu: goto label_1055fc;
        case 0x10560cu: goto label_10560c;
        case 0x105644u: goto label_105644;
        case 0x105654u: goto label_105654;
        default: break;
    }

    ctx->pc = 0x105450u;

    // 0x105450: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x105450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x105454: 0xffb10410  sd          $s1, 0x410($sp)
    ctx->pc = 0x105454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 17));
    // 0x105458: 0xffa60490  sd          $a2, 0x490($sp)
    ctx->pc = 0x105458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 6));
    // 0x10545c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10545cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105460: 0xffb30430  sd          $s3, 0x430($sp)
    ctx->pc = 0x105460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 19));
    // 0x105464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105468: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x105468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x10546c: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x10546cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x105470: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x105470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x105474: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x105474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105478: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x105478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
    // 0x10547c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10547cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105480: 0xffa70498  sd          $a3, 0x498($sp)
    ctx->pc = 0x105480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1176), GPR_U64(ctx, 7));
    // 0x105484: 0xffa804a0  sd          $t0, 0x4A0($sp)
    ctx->pc = 0x105484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 8));
    // 0x105488: 0xffa904a8  sd          $t1, 0x4A8($sp)
    ctx->pc = 0x105488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1192), GPR_U64(ctx, 9));
    // 0x10548c: 0xffaa04b0  sd          $t2, 0x4B0($sp)
    ctx->pc = 0x10548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 10));
    // 0x105490: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x105490u;
    SET_GPR_U32(ctx, 31, 0x105498u);
    ctx->pc = 0x105494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105490u;
            // 0x105494: 0xffab04b8  sd          $t3, 0x4B8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1208), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C2B0u;
    if (runtime->hasFunction(0x12C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x12C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105498u; }
        if (ctx->pc != 0x105498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x12c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105498u; }
        if (ctx->pc != 0x105498u) { return; }
    }
    ctx->pc = 0x105498u;
label_105498:
    // 0x105498: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x105498u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10549c: 0x10c00079  beqz        $a2, . + 4 + (0x79 << 2)
    ctx->pc = 0x10549Cu;
    {
        const bool branch_taken_0x10549c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10549Cu;
            // 0x1054a0: 0x27b00001  addiu       $s0, $sp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10549c) {
            ctx->pc = 0x105684u;
            goto label_105684;
        }
    }
    ctx->pc = 0x1054A4u;
    // 0x1054a4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1054a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1054a8: 0x14c2001a  bne         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1054A8u;
    {
        const bool branch_taken_0x1054a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1054ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054A8u;
            // 0x1054ac: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054a8) {
            ctx->pc = 0x105514u;
            goto label_105514;
        }
    }
    ctx->pc = 0x1054B0u;
    // 0x1054b0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1054B0u;
    {
        const bool branch_taken_0x1054b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054B0u;
            // 0x1054b4: 0x93a20001  lbu         $v0, 0x1($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054b0) {
            ctx->pc = 0x105674u;
            goto label_105674;
        }
    }
    ctx->pc = 0x1054B8u;
label_1054b8:
    // 0x1054b8: 0x24032442  addiu       $v1, $zero, 0x2442
    ctx->pc = 0x1054b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9282));
    // 0x1054bc: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1054bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1054c0: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1054C0u;
    {
        const bool branch_taken_0x1054c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1054C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054C0u;
            // 0x1054c4: 0x28a22443  slti        $v0, $a1, 0x2443 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9283) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054c0) {
            ctx->pc = 0x1054FCu;
            goto label_1054fc;
        }
    }
    ctx->pc = 0x1054C8u;
    // 0x1054c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1054C8u;
    {
        const bool branch_taken_0x1054c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054C8u;
            // 0x1054cc: 0x24022440  addiu       $v0, $zero, 0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054c8) {
            ctx->pc = 0x1054E0u;
            goto label_1054e0;
        }
    }
    ctx->pc = 0x1054D0u;
    // 0x1054d0: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1054D0u;
    {
        const bool branch_taken_0x1054d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1054d0) {
            ctx->pc = 0x1054D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1054D0u;
            // 0x1054d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105500u;
            goto label_105500;
        }
    }
    ctx->pc = 0x1054D8u;
    // 0x1054d8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1054D8u;
    {
        const bool branch_taken_0x1054d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1054d8) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x1054E0u;
label_1054e0:
    // 0x1054e0: 0x24022840  addiu       $v0, $zero, 0x2840
    ctx->pc = 0x1054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10304));
    // 0x1054e4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1054E4u;
    {
        const bool branch_taken_0x1054e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1054E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054E4u;
            // 0x1054e8: 0x24022842  addiu       $v0, $zero, 0x2842 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10306));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054e4) {
            ctx->pc = 0x105508u;
            goto label_105508;
        }
    }
    ctx->pc = 0x1054ECu;
    // 0x1054ec: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1054ECu;
    {
        const bool branch_taken_0x1054ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1054ec) {
            ctx->pc = 0x1054F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1054ECu;
            // 0x1054f0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10550Cu;
            goto label_10550c;
        }
    }
    ctx->pc = 0x1054F4u;
    // 0x1054f4: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1054F4u;
    {
        const bool branch_taken_0x1054f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1054f4) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x1054FCu;
label_1054fc:
    // 0x1054fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1054fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105500:
    // 0x105500: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x105500u;
    {
        const bool branch_taken_0x105500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105500u;
            // 0x105504: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105500) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x105508u;
label_105508:
    // 0x105508: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x105508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10550c:
    // 0x10550c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x10550Cu;
    {
        const bool branch_taken_0x10550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10550Cu;
            // 0x105510: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10550c) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x105514u;
label_105514:
    // 0x105514: 0x14c20011  bne         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x105514u;
    {
        const bool branch_taken_0x105514 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x105518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105514u;
            // 0x105518: 0x2cc20080  sltiu       $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105514) {
            ctx->pc = 0x10555Cu;
            goto label_10555c;
        }
    }
    ctx->pc = 0x10551Cu;
    // 0x10551c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10551cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105520: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x105520u;
    {
        const bool branch_taken_0x105520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105520u;
            // 0x105524: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105520) {
            ctx->pc = 0x105684u;
            goto label_105684;
        }
    }
    ctx->pc = 0x105528u;
    // 0x105528: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x105528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x10552c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x10552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x105530: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x105530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x105534: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105534u;
    {
        const bool branch_taken_0x105534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105534) {
            ctx->pc = 0x10554Cu;
            goto label_10554c;
        }
    }
    ctx->pc = 0x10553Cu;
    // 0x10553c: 0x56200046  bnel        $s1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x10553Cu;
    {
        const bool branch_taken_0x10553c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10553c) {
            ctx->pc = 0x105540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10553Cu;
            // 0x105540: 0xa224000c  sb          $a0, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105658u;
            goto label_105658;
        }
    }
    ctx->pc = 0x105544u;
    // 0x105544: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x105544u;
    {
        const bool branch_taken_0x105544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105544u;
            // 0x105548: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105544) {
            ctx->pc = 0x10565Cu;
            goto label_10565c;
        }
    }
    ctx->pc = 0x10554Cu;
label_10554c:
    // 0x10554c: 0x54660043  bnel        $v1, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x10554Cu;
    {
        const bool branch_taken_0x10554c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x10554c) {
            ctx->pc = 0x105550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10554Cu;
            // 0x105550: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10565Cu;
            goto label_10565c;
        }
    }
    ctx->pc = 0x105554u;
    // 0x105554: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x105554u;
    {
        const bool branch_taken_0x105554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105554) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x10555Cu;
label_10555c:
    // 0x10555c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x10555Cu;
    {
        const bool branch_taken_0x10555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10555Cu;
            // 0x105560: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10555c) {
            ctx->pc = 0x105614u;
            goto label_105614;
        }
    }
    ctx->pc = 0x105564u;
    // 0x105564: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x105564u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105568: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x105568u;
    {
        const bool branch_taken_0x105568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10556Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105568u;
            // 0x10556c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105568) {
            ctx->pc = 0x105684u;
            goto label_105684;
        }
    }
    ctx->pc = 0x105570u;
    // 0x105570: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x105570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x105574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105578: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x105578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x10557c: 0x1243001d  beq         $s2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x10557Cu;
    {
        const bool branch_taken_0x10557c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x105580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10557Cu;
            // 0x105580: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10557c) {
            ctx->pc = 0x1055F4u;
            goto label_1055f4;
        }
    }
    ctx->pc = 0x105584u;
    // 0x105584: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x105584u;
    {
        const bool branch_taken_0x105584 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x105588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105584u;
            // 0x105588: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105584) {
            ctx->pc = 0x10559Cu;
            goto label_10559c;
        }
    }
    ctx->pc = 0x10558Cu;
    // 0x10558c: 0x1242001d  beq         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10558Cu;
    {
        const bool branch_taken_0x10558c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x10558c) {
            ctx->pc = 0x105604u;
            goto label_105604;
        }
    }
    ctx->pc = 0x105594u;
    // 0x105594: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x105594u;
    {
        const bool branch_taken_0x105594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105594) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x10559Cu;
label_10559c:
    // 0x10559c: 0x2cc200a0  sltiu       $v0, $a2, 0xA0
    ctx->pc = 0x10559cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x1055a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1055A0u;
    {
        const bool branch_taken_0x1055a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1055A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055A0u;
            // 0x1055a4: 0x24c2ff20  addiu       $v0, $a2, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055a0) {
            ctx->pc = 0x1055C4u;
            goto label_1055c4;
        }
    }
    ctx->pc = 0x1055A8u;
    // 0x1055a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1055ac: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1055acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1055b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1055B0u;
    {
        const bool branch_taken_0x1055b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055B0u;
            // 0x1055b4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055b0) {
            ctx->pc = 0x1055E4u;
            goto label_1055e4;
        }
    }
    ctx->pc = 0x1055B8u;
    // 0x1055b8: 0x2c4200a1  sltiu       $v0, $v0, 0xA1
    ctx->pc = 0x1055b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)161) ? 1 : 0);
    // 0x1055bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1055BCu;
    {
        const bool branch_taken_0x1055bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055bc) {
            ctx->pc = 0x1055D4u;
            goto label_1055d4;
        }
    }
    ctx->pc = 0x1055C4u;
label_1055c4:
    // 0x1055c4: 0xc041768  jal         func_105DA0
    ctx->pc = 0x1055C4u;
    SET_GPR_U32(ctx, 31, 0x1055CCu);
    ctx->pc = 0x1055C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1055C4u;
            // 0x1055c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105DA0u;
    if (runtime->hasFunction(0x105DA0u)) {
        auto targetFn = runtime->lookupFunction(0x105DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055CCu; }
        if (ctx->pc != 0x1055CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sjis2jis_0x105da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055CCu; }
        if (ctx->pc != 0x1055CCu) { return; }
    }
    ctx->pc = 0x1055CCu;
label_1055cc:
    // 0x1055cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1055CCu;
    {
        const bool branch_taken_0x1055cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055CCu;
            // 0x1055d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055cc) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x1055D4u;
label_1055d4:
    // 0x1055d4: 0xc041764  jal         func_105D90
    ctx->pc = 0x1055D4u;
    SET_GPR_U32(ctx, 31, 0x1055DCu);
    ctx->pc = 0x1055D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1055D4u;
            // 0x1055d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105D90u;
    if (runtime->hasFunction(0x105D90u)) {
        auto targetFn = runtime->lookupFunction(0x105D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055DCu; }
        if (ctx->pc != 0x1055DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        euc2jis_0x105d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055DCu; }
        if (ctx->pc != 0x1055DCu) { return; }
    }
    ctx->pc = 0x1055DCu;
label_1055dc:
    // 0x1055dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1055DCu;
    {
        const bool branch_taken_0x1055dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055DCu;
            // 0x1055e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055dc) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x1055E4u;
label_1055e4:
    // 0x1055e4: 0xc041764  jal         func_105D90
    ctx->pc = 0x1055E4u;
    SET_GPR_U32(ctx, 31, 0x1055ECu);
    ctx->pc = 0x1055E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1055E4u;
            // 0x1055e8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105D90u;
    if (runtime->hasFunction(0x105D90u)) {
        auto targetFn = runtime->lookupFunction(0x105D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055ECu; }
        if (ctx->pc != 0x1055ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        euc2jis_0x105d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055ECu; }
        if (ctx->pc != 0x1055ECu) { return; }
    }
    ctx->pc = 0x1055ECu;
label_1055ec:
    // 0x1055ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1055ECu;
    {
        const bool branch_taken_0x1055ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055ECu;
            // 0x1055f0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055ec) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x1055F4u;
label_1055f4:
    // 0x1055f4: 0xc041768  jal         func_105DA0
    ctx->pc = 0x1055F4u;
    SET_GPR_U32(ctx, 31, 0x1055FCu);
    ctx->pc = 0x105DA0u;
    if (runtime->hasFunction(0x105DA0u)) {
        auto targetFn = runtime->lookupFunction(0x105DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055FCu; }
        if (ctx->pc != 0x1055FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sjis2jis_0x105da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055FCu; }
        if (ctx->pc != 0x1055FCu) { return; }
    }
    ctx->pc = 0x1055FCu;
label_1055fc:
    // 0x1055fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1055FCu;
    {
        const bool branch_taken_0x1055fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055FCu;
            // 0x105600: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055fc) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x105604u;
label_105604:
    // 0x105604: 0xc041764  jal         func_105D90
    ctx->pc = 0x105604u;
    SET_GPR_U32(ctx, 31, 0x10560Cu);
    ctx->pc = 0x105D90u;
    if (runtime->hasFunction(0x105D90u)) {
        auto targetFn = runtime->lookupFunction(0x105D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10560Cu; }
        if (ctx->pc != 0x10560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        euc2jis_0x105d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10560Cu; }
        if (ctx->pc != 0x10560Cu) { return; }
    }
    ctx->pc = 0x10560Cu;
label_10560c:
    // 0x10560c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10560Cu;
    {
        const bool branch_taken_0x10560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10560Cu;
            // 0x105610: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10560c) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x105614u;
label_105614:
    // 0x105614: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105614u;
    {
        const bool branch_taken_0x105614 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x105614) {
            ctx->pc = 0x105634u;
            goto label_105634;
        }
    }
    ctx->pc = 0x10561Cu;
    // 0x10561c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x10561cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105620: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x105620u;
    {
        const bool branch_taken_0x105620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105620u;
            // 0x105624: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105620) {
            ctx->pc = 0x105684u;
            goto label_105684;
        }
    }
    ctx->pc = 0x105628u;
    // 0x105628: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x105628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x10562c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x105630: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x105630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_105634:
    // 0x105634: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x105634u;
    {
        const bool branch_taken_0x105634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x105634) {
            ctx->pc = 0x105638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105634u;
            // 0x105638: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105658u;
            goto label_105658;
        }
    }
    ctx->pc = 0x10563Cu;
    // 0x10563c: 0xc041882  jal         func_106208
    ctx->pc = 0x10563Cu;
    SET_GPR_U32(ctx, 31, 0x105644u);
    ctx->pc = 0x105640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10563Cu;
            // 0x105640: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (runtime->hasFunction(0x106208u)) {
        auto targetFn = runtime->lookupFunction(0x106208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105644u; }
        if (ctx->pc != 0x105644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevFontKnj2Chr_0x106208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105644u; }
        if (ctx->pc != 0x105644u) { return; }
    }
    ctx->pc = 0x105644u;
label_105644:
    // 0x105644: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x105644u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x105648: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10564c: 0xc0415b6  jal         func_1056D8
    ctx->pc = 0x10564Cu;
    SET_GPR_U32(ctx, 31, 0x105654u);
    ctx->pc = 0x105650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10564Cu;
            // 0x105650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1056D8u;
    if (runtime->hasFunction(0x1056D8u)) {
        auto targetFn = runtime->lookupFunction(0x1056D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105654u; }
        if (ctx->pc != 0x105654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPut_0x1056d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105654u; }
        if (ctx->pc != 0x105654u) { return; }
    }
    ctx->pc = 0x105654u;
label_105654:
    // 0x105654: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x105654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_105658:
    // 0x105658: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x105658u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_10565c:
    // 0x10565c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x10565Cu;
    {
        const bool branch_taken_0x10565c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x105660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10565Cu;
            // 0x105660: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10565c) {
            ctx->pc = 0x105684u;
            goto label_105684;
        }
    }
    ctx->pc = 0x105664u;
    // 0x105664: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x105664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x105668: 0x14c2ffaa  bne         $a2, $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x105668u;
    {
        const bool branch_taken_0x105668 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10566Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105668u;
            // 0x10566c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105668) {
            ctx->pc = 0x105514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105514;
        }
    }
    ctx->pc = 0x105670u;
    // 0x105670: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x105670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_105674:
    // 0x105674: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105674u;
    {
        const bool branch_taken_0x105674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105674u;
            // 0x105678: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105674) {
            ctx->pc = 0x105684u;
            goto label_105684;
        }
    }
    ctx->pc = 0x10567Cu;
    // 0x10567c: 0x14a0ff8e  bnez        $a1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x10567Cu;
    {
        const bool branch_taken_0x10567c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x105680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10567Cu;
            // 0x105680: 0x21200  sll         $v0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10567c) {
            ctx->pc = 0x1054B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1054b8;
        }
    }
    ctx->pc = 0x105684u;
label_105684:
    // 0x105684: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x105684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105688: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x105688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x10568c: 0xdfb30430  ld          $s3, 0x430($sp)
    ctx->pc = 0x10568cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x105690: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x105690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x105694: 0xdfb10410  ld          $s1, 0x410($sp)
    ctx->pc = 0x105694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x105698: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x105698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x10569c: 0x3e00008  jr          $ra
    ctx->pc = 0x10569Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1056A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10569Cu;
            // 0x1056a0: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1056A4u;
}
